#include <iostream>

template <typename T, typename U>
class Rectangle {
  public:
    Rectangle(T height, U width)
      : height_(height), width_(width) {}

    T Area() const {
      return height_ * width_;
    }

  private:
    const T height_;
    const T width_;
};

int main(int argc, char* argv[]) {
  Rectangle<int, int> r1(10, 20);
  std::cout << r1.Area() << std::endl;

  Rectangle<double, double> r2(1.2, 3.4);
  std::cout << r2.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
