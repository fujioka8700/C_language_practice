#include <iostream>
#include <array>

int main(int argc, char* argv[]) {
  std::array<int, 5> x = {0, 1, 2, 3, 4};

  for(auto i: x) {
    std::cout << i << std::endl;
  }

  std::cout << "おわり" << std::endl;

  return 0;
}
