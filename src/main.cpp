#include <iostream>

class Integer {
  public:
    Integer(int value) : value_(value) {};

  int Value() const {
    return value_;
  }

  Integer& operator++() {
    ++value_;
    return *this;
  }

  Integer operator++(int) {
    Integer tmp(Value());
    ++value_;
    return tmp;
  }

  Integer operator-() const  {
    Integer tmp(Value());
    return tmp;
  }

  private:
    int value_;
};

int main(int argc, char* argv[]) {
  Integer a(2);

  Integer b = -a; // a.operator-();
  std::cout << b.Value() << std::endl;

  ++a; // a.operator++();
  std::cout << a.Value() << std::endl;

  a++; // a.operator++(1);
  std::cout << a.Value() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
