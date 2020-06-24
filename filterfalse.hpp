#ifndef FILTERFALSE_HPP
#define FILTERFALSE_HPP
   namespace itertools{
       template<typename func, typename cont> class filterfalse
       {
                       func f;

           cont c;
           public:
           explicit filterfalse (func f, cont c):
           f(f),c(c){}
           class iterator
           {
               
               typename cont::iterator it;
               typename cont::iterator end;
               
               func function;
public:
               explicit iterator( typename cont::iterator it,typename cont::iterator end,  func function):it(it),end(end),function(function){
                   while(it!=end&&function(*it))
                   {
                       ++it;
                   }
                   
               };
               iterator& operator =(const iterator& other)
               {
                   this->it=other.it;
                   this->end=other.end;
                   this->function=other.function;
                   return *this;
               }
               
               bool operator ==(const iterator& other)
               {
                   return(it==other.it);
                   
               }
                 bool operator !=(const iterator& other)
               {
                   return(it!=other.it);
                   
               }
               
               iterator& operator ++()
               {
                   ++it;
                   while(it!=end&&function(*it))
                   {
                       ++it;
                       
                   }
                  
                   return *this;
               }
               
                iterator& operator ++(int)
               {
                   iterator tmp= *this;
                   ++(*this);
                   return tmp;
               }
               auto operator *()
               {
                   return *it;
               }
               
           };
           
           iterator begin()
           {
               return iterator(c.begin(),c.end(),f);
           }
           
           iterator end()
           {
               return iterator(c.end(),c.end(),f);
           }
           
           
       };
   }
   #endif
   