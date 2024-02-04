#include <iostream>

class Rectangle {
  public:
    Rectangle(int height, int width) :
      height_(height), width_(width) {}

    int Area() const;

  private:
    const int height_;
    const int width_;
};

int main(int argc, char* argv[]) {
  Rectangle r(10, 20);

  // std::cout << r << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
