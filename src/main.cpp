#include <iostream>

class Square {
  public:
    explicit Square(int size) : size_(size) {}
    Square() = default; // default 指定

    int Area() {
      return size_ * size_;
    }

  private:
    int size_;
};

int main(int argc, char* argv[]) {
  Square s1;
  Square s2(10);

  std::cout << s1.Area() << std::endl;
  std::cout << s2.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
