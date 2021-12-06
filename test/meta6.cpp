

#include <iostream>
#include <array>

constexpr int TABLE_SIZE = 20;
constexpr int OFFSET = 12;

template<typename VALUETYPE, VALUETYPE OFFSET>
constexpr std::array<VALUETYPE, TABLE_SIZE> table = [] {
  std::array<VALUETYPE, TABLE_SIZE> A = {};
  for (unsigned i = 0; i < TABLE_SIZE; i++) {
    A[i] = OFFSET + i * i;
  }
  return A;
}();

int main() {
  for(int i = 0; i < TABLE_SIZE; i++) {
    std::cout << table<uint16_t, OFFSET>[i] << std::endl;
  }
}


