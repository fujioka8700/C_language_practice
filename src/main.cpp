#include <iostream>
#include <memory>

class Rectangle {
  public:
    int Area();

    int height;
    int width;
};

int Rectangle::Area() {
  return this->height * this->width;
};

int main(int argc, char* argv[]) {
  Rectangle r;
  r.height = 10;
  r.width = 20;

  std::cout << r.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
