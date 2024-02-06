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

Integer operator+(const Integer& lhs, const Integer& rhs) {
  Integer tmp(lhs.Value() + rhs.Value());
  return tmp;
}

class RealNumber {
  public:
    explicit RealNumber(double value) : value_(value) {}

    double Value() const {
      return value_;
    }

  private:
    double value_;
};

RealNumber operator+(const Integer& lhs, const RealNumber& rhs) {
  RealNumber tmp(lhs.Value() + rhs.Value());
  return tmp;
}

RealNumber operator+(const RealNumber& lhs, const Integer& rhs) {
  RealNumber tmp(lhs.Value() + rhs.Value());
  return tmp;
}

int main(int argc, char* argv[]) {
  Integer a(2);
  RealNumber b(3.5);

  RealNumber c = a + b;
  std::cout << c.Value() << std::endl;
  
  RealNumber d = b + a;
  std::cout << d.Value() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
