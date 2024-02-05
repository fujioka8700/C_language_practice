#include <iostream>

int main(int argc, char* argv[]) {
  int* p1 = new int(100);

  std::cout << *p1 << std::endl;
  delete p1;
  std::cout << *p1 << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
