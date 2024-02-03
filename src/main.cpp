#include "aaa.hpp"
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> x(1000000);
  std::vector<int> y = x;

  std::cout << &x << std::endl;
  std::cout << &y << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
