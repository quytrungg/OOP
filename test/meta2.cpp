#include <iostream>

unsigned factorial(unsigned n) {
	return n == 0 ? 1 : n * factorial(n - 1); 
}

template <unsigned N> struct factorial {
	enum{ value = N * factorial<N - 1>::value};
};

template <> struct factorial<0> {
	enum {value = 1};
};

int main(){
	std::cout << factorial(4) << "\n";// << factorial<4>::value;
    return 0;
}
