#include <iostream>

class Rectangle {
  public:
    int Area() const {
      return height_ * width_;
    }

  int height_;
  int width_;
};

class Square : public Rectangle {
  public:
    void SetSize(int size) {
      height_ = size;
      width_ = size;
    }
};

int main(int argc, char* argv[]) {
    Square s;
    s.SetSize(10);

    const Rectangle& r = s;
    // r.SetSize(5); 不可能
    std::cout << "area = " << r.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
