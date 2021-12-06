

#include <iostream>
#include <array>

constexpr int TABLE_SIZE = 10;
constexpr std::array<int, TABLE_SIZE> table = [] {
  std::array<int, TABLE_SIZE> A = {};
  for (unsigned i = 0; i < TABLE_SIZE; i++) {
    A[i] = i * i;
  }
  return A;
}();

enum  {
  FOUR = table[2]
};

int main() {
  for(int i=0; i < TABLE_SIZE; i++) {
    std::cout << table[i]  << std::endl;
  }
  std::cout << "FOUR: " << FOUR << std::endl;
}


