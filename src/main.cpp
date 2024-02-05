#include <iostream>
#include <vector>


int main(int argc, char* argv[]) {
  std::vector<int>* x = new std::vector<int>(100);
  std::vector<int>* y = x;

  (*x)[10] = 100;

  std::cout << (*x)[10] << std::endl;
  std::cout << (*y)[10] << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
