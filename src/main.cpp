#include <iostream>

class Integer {
  public:
    explicit Integer(int value) : value_(value) {};

    int Value() const {
      return value_;
    }

  private:
    int value_;
};

Integer operator-(const Integer& v) {
  Integer tmp(-v.Value());
  return tmp;
}

int main(int argc, char* argv[]) {
  Integer a(2);

  Integer b = -a;

  std::cout << a.Value() << std::endl;
  std::cout << b.Value() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
