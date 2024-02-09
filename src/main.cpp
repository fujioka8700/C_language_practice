#include <iostream>
#include "sum.hpp"

int main(int argc, char* argv[]) {
  std::cout << Sum<int>(1, 2) << std::endl; 

  std::cout << "おわり" << std::endl;

  return 0;
}
