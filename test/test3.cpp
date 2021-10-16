#include <iostream>
#include <string>
#include <fstream>

template <typename T>
T calc(T x, T y){
    return x + y;
}

struct PhanSo{
    int tu;
    int mau;
};

//typedef int (* awp)(int, int);
/*int cal(int x, int y, awp p){
    x *= x;
    y *=y*y;
    return p(x, y);
}*/

int cal(int x, int y, int(*p)(int, int)){
    x *= x;
    y *=y*y;
    return p(x, y);
}

int add(int x, int y){
    return x+y;
}

int mul(int x, int y){
    return x*y;
}

int main(){
    int x = calc(3, 5);
    double y = calc(4.2, 6.3);
    PhanSo p1, p2;
    p1.tu = 1;
    p1.mau = 2;
    p2.tu = 2;
    p2.mau = 3;
    //PhanSo p3 = calc(p1, p2);

    int a = cal(3, 5, add);
    int b = cal(4, 6, mul);

    std::cout << a << " " << b << "\n";

    std::cout << x << " " << y << " " << p1.tu << "/" << p1.mau << "\n";
}