#include <iostream>
#include "pointer.hpp"

int main(int argc, char* argv[]) {
  int size = 500;
  int* p = new int[size];

  Set(size, p);

  Show(size, p);

  std::cout << "おわり" << std::endl;

  delete[] p;

  return 0;
}
