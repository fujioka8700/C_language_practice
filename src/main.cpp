#include <iostream>
#include "brightness.hpp"

int main(int argc, char* argv[]) {
  Brightness b1 = Brightness::Maximum();
  std::cout << b1.Value() << std::endl;

  Brightness b2 = Brightness::Minimum();
  std::cout << b2.Value() << std::endl;

  Brightness b3 = Brightness::Median();
  std::cout << b3.Value() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
