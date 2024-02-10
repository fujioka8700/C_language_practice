#include <iostream>

int main(int argc, char* argv[]) {
  int x = 5;
  const int* p = &x;

  *p = 456;

  std::cout << &x << std::endl;
  std::cout <<  p << std::endl;

  std::cout <<  x << std::endl;
  std::cout << *p << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
