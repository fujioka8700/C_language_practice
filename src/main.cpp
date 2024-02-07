#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> x(1000000);
  std::vector<int> y = std::move(x);

  std::cout << "おわり" << std::endl;

  return 0;
}
