#include <iostream>

class Rectangle {
  public:
    Rectangle();

    int Area() const {
      return height_ * width_;
    };

  private:
    const int height_;
    const int width_;
};

Rectangle::Rectangle() : height_(), width_() {}

int main(int argc, char* argv[]) {
  Rectangle r;

  std::cout << r.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
