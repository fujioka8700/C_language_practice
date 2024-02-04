#include <iostream>

class Rectangle {
  public:
    Rectangle(int height, int width) : height_(height), width_(width) {
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
    Square(int size) : Rectangle(size, size) {
      std::cout << "Square::Square() is called." << std::endl;
    }
};

int main(int argc, char* argv[]) {
  Square s(10);

  std::cout << s.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
