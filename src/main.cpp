#include <iostream>
#include "utils.hpp"
#include "integer.hpp"
#include "realnumber.hpp"

int main(int argc, char* argv[]) {
  Integer a(2);
  Integer b(3);
  Integer c = a + b;
  std::cout << c.Value() << std::endl;

  RealNumber d(3.5);
  RealNumber e = a + d;
  std::cout << e.Value() << std::endl;

  RealNumber f = d + a;
  std::cout << f.Value() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
