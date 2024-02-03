#include "aaa.hpp"
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int>* x = new std::vector<int>(1000000);
  std::vector<int>* y = x;
  x = nullptr;

  std::cout << x << std::endl;
  std::cout << y << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
