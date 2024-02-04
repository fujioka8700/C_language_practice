#include <iostream>
#include <memory>

class Rectangle {
  public:
    int Area() const {
      return this->height * this->width;
    };

    int height;
    int width;
};

class Squere : public Rectangle {
  public:
    void setSize(int size) {
      height = size;
      width = size;
    }
};

int main(int argc, char* argv[]) {
  Squere s;
  s.setSize(10);
  std::cout << s.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
