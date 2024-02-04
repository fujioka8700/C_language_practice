#include <iostream>

class Rectangle {
  public:
    Rectangle() : height_(0), width_(0) {
      std::cout << "Rectangle::Rectangle() is called." << std::endl;
    }

    int Area() {
      return height_ * width_;
    }

  private:
    const int height_;
    const int width_;
};

class Square : public Rectangle {
  public:
    Square() {
      std::cout << "Square::Square() is called." << std::endl;
    }
};

int main(int argc, char* argv[]) {
  Square s;

  std::cout << s.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
