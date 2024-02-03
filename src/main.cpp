#include "aaa.hpp"
#include <iostream>

void changeToFifty1(int v) {
  v = 50;
}

void changeToFifty2(int* v) {
  *v = 50;
}

int main(int argc, char* argv[]) {
  int a = 100;
  changeToFifty1(a);
  std::cout << a << std::endl;

  int b = 100;
  changeToFifty2(&b);
  std::cout << b << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
