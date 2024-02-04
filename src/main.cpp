#include <iostream>

class Rectangle {
  public:
    Rectangle();
    Rectangle(const Rectangle& r): height_(100), width_(100) {};

    int Area() const {
      return height_ * width_;
    };

  private:
    const int height_;
    const int width_;
};

Rectangle::Rectangle() : height_(0), width_(0) {}

class Copyable {
  public:
    Copyable(){};
    Copyable(const Copyable& c){};
};

int main(int argc, char* argv[]) {
  Rectangle r1;
  Rectangle r2(r1);
  
  std::cout << r1.Area() << std::endl;
  std::cout << r2.Area() << std::endl;

  Copyable c1;
  Copyable c2(c1);

  std::cout << &c1 << std::endl;
  std::cout << &c2 << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
