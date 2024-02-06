#include <iostream>

class Copyable {
  public:
    Copyable() {};

    Copyable(const Copyable& c) {
      std::cout << "c3:" << this << std::endl;
      std::cout << "c2:" << &c << std::endl;
      std::cout << "コピーコンストラクタ" << std::endl;
    }

    Copyable& operator=(const Copyable& c) {
      std::cout << "c1:" << this << std::endl;
      std::cout << "c2:" << &c << std::endl;
      std::cout << "コピー演算子" << std::endl;;
      return * this;
    };
};

int main(int argc, char* argv[]) {
  Copyable c1, c2;
  c1 = c2; // c1.operator=(c2);
  Copyable c3 = c2;

  std::cout << "おわり" << std::endl;

  return 0;
}
