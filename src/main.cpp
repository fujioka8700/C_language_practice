#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> x(1000000);

  x[10] = 999;

  std::vector<int> y = x;

  std::cout << x[10] << std::endl;
  std::cout << y[10] << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
