#ifndef COMPRESS_HPP
#define COMPRESS_HPP
#include <iostream>

namespace itertools
{
    template<typename cont , typename contbool> class compress
    {
        cont& c;
        contbool& c2;
        public:
        explicit compress ( cont& c, contbool& c2) : c(c),c2(c2){
           
    }
    
      class iterator{
         typename cont :: iterator it;
         typename cont :: iterator end;
         typename contbool :: iterator it2;
         public:
         iterator(typename cont :: iterator it,  typename cont :: iterator end,  typename contbool :: iterator it2) : it(it), end(end), it2(it2){
             while( it!=end&&!(*it2))
             {
                 ++it;
                 ++it2;
             }
         }
         
         bool operator == (const iterator& other)
         {
             return (it==other.it);
         }
         
         bool operator != (const iterator& other)
         {
             return (it!=other.it);
         }
         
         iterator& operator = (const iterator& other)
         {
             it=other.it;
             end=other.end;
             it2=other.it2;
         }
         
         iterator& operator ++()
         {
             ++it;
             ++it2;
             while(it!=end&&!(*it2))
             {
                 ++it;
                 ++it2;
             }
             return *this;
         }
         
         iterator& operator ++(int)
         {
            iterator tmp=*this;
            ++(*this);
            return tmp;
         }
         
          
         auto operator *()
         {return *it;
         }
         
         
         
      };
      
      
    iterator begin()
    {
        return iterator(c.begin(),c.end(),c2.begin());
    }
    iterator end()
    {
        return iterator(c.end(),c.end(),c2.end());
    }
    
};
}
#endif