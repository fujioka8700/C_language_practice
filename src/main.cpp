#include <iostream>
#include "rectangle.hpp"
#include "square.hpp"

int main(int argc, char* argv[]) {
  Square s;
  s.SetSize(100);
  s.Describe();

  Rectangle& r = s;
  r.Describe();
  std::cout << r.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
