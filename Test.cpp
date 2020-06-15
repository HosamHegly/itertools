#include "doctest.h"
#include <iostream>
#include <vector>
#include <limits>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"


using namespace itertools;
using namespace std;

TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}

TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}
TEST_CASE("accumulate of range with function"){
    typedef struct{
        int operator ()(int a, int b) const{
            return (a*b+3)/2;
        }
    } func;
    int j = 1, sum = 1;
    func f;
    for(int i : accumulate(range(1,10), f)){
        CHECK(i == sum);
        sum = f(sum, ++j);
    }
}