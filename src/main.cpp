#include <iostream>

int main(int argc, char* argv[]) {
  double dx = 3.14;
  int x = static_cast<int>(dx);

  std::cout << x << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
