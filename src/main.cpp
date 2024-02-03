#include "aaa.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
  int* p1 = new int(100);
  int* p2 = new int[5];

  delete p1;
  delete[] p2;

  std::cout << "*p1=" << *p1 << std::endl;
  std::cout << "*p2=" << *p2 << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
