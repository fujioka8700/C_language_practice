#include <iostream>

int main(int argc, char* argv[]) {
  int x[5] = {0, 10, 20, 30, 40};

  for(auto i: x) {
    std::cout << i << std::endl;
  }

  std::cout << "おわり" << std::endl;

  return 0;
}
