#include <iostream>

#include "lib1.hpp"

int main() {
  std::cout << "Hello" << std::endl;
  std::cout << Lib1::add(1, 2) << std::endl;
  return 0;
}