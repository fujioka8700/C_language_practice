#include <iostream>

class Movable {
  public:
    Movable() {};
    Movable(Movable&& m) {};
};

int main(int argc, char* argv[]) {
  Movable m1;
  Movable m2(std::move(m1));
  
  std::cout << &m2 << std::endl;
  std::cout << &m1 << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
