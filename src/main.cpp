#include <iostream>

class Movable {
  public:
    Movable(int value) : value_(value) {
      std::cout << "デフォルトコンストラクタ" << std::endl;
    }
    Movable(Movable&& m) : value_(m.Value()) {
      std::cout << "ムーブコンストラクタ" << std::endl;
    }

    int Value() {
      return value_;
    }

  private:
    int value_;
};

int main(int argc, char* argv[]) {
  Movable m1(10);
  Movable m2(std::move(m1));

  std::cout << m1.Value() << std::endl;
  std::cout << m2.Value() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
