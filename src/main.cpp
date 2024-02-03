#include "aaa.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
  int* x = new int(100);
  int* y = x;

  std::cout << x << '=' << *x << std::endl;
  std::cout << y << '=' << *y << std::endl;

  *y = 50;

  std::cout << x << '=' << *x << std::endl;
  std::cout << y << '=' << *y << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
