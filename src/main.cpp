#include <iostream>

class Polygon {
  public:
    virtual int Area() const = 0;
};

class Rectangle : public Polygon {
  public:
    Rectangle() : height_(2), width_(3) {}
    int Area() const override {
      return height_ * width_;
    }

  public:
    int height_;
    int width_;
};

int main(int argc, char* argv[]) {
  Rectangle r;
  std::cout << r.Area() << std::endl;

  Polygon& p = r;
  std::cout << p.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
