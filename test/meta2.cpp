#include <iostream>

unsigned factorial(unsigned n) {
	return n == 0 ? 1 : n * factorial(n - 1); 
}

template <unsigned N>
struct factorial {
	static constexpr unsigned value = N * factorial<N - 1>::value;
};

template <>
struct factorial<0> {
	static constexpr unsigned value = 1;
};

int main(){

	std::cout << "\n" << factorial<4>::value;
    return 0;
}
