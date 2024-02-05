#include <iostream>

class Rectangle {
  public:
    virtual void Describe() const {
      std::cout << "height = " << height_ << std::endl;
      std::cout << "width = " << width_ << std::endl;
    }

  protected:
    int height_;
    int width_;
};

class Square : public Rectangle {
  public:
    void SetSize(int size) {
      height_ = size;
      width_ = size;
    }

    void Describe() const override {
      std::cout << "size = " << height_ << std::endl;
    }
};

int main(int argc, char* argv[]) {
  Square s;
  s.SetSize(100);
  s.Describe();

  Rectangle& r = s;
  r.Describe();

  std::cout << "おわり" << std::endl;

  return 0;
}
