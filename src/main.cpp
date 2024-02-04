#include <iostream>
#include <memory>

class Rectangle {
  public:
    int Area() const {
      return height_ * width_;
    };
  
    virtual void Describe() const {
      std::cout << "height=" << height_ << std::endl;
      std::cout << "width=" << width_ << std::endl;
    }

    int height_;
    int width_;
};

class Squere : public Rectangle {
  public:
    void setSize(int size) {
      height_ = size;
      width_ = size;
    }

    void Describe() const override {
      std::cout << "size=" << height_ << std::endl;
    }
};

int main(int argc, char* argv[]) {
  Squere s;
  s.setSize(10);
  s.Describe();

  Rectangle& r = s;
  r.Describe();

  std::cout << "おわり" << std::endl;

  return 0;
}
