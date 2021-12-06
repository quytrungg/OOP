#include <iostream>
 
template<int n>
struct funStruct {
    enum { value = 2*funStruct<n-1>::value };
};
 
template<> struct
funStruct<0> {
    enum { value = 1 };
};

namespace hanimie{
    std::string dosth(){
        return "anh yeu hanimie";
    }
}

using namespace hanimie;
 
int main()
{
    std::cout << dosth();
    return 0;
}