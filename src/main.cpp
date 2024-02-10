#include <iostream>

int Add(int x, int y) {
    return x + y;
}

int main(int argc, char* argv[]) {
  int (*fp)(int, int) = Add;

  std::cout << fp(1, 2) << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
