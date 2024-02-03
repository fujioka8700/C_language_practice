#include "aaa.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
  // deep copy
  int x = 100;
  int y = x;

  y = 50;

  std::cout << x << std::endl; // x はそのまま
  std::cout << y << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
