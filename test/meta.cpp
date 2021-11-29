#include <iostream>
 
template<int n> struct funStruct
{
    enum { value = 2*funStruct<n-1>::value };
};
 
template<> struct funStruct<0>
{
    enum { value = 1 };
};
 
int main()
{
    std::cout << funStruct<10>::value << std::endl;
    return 0;
}