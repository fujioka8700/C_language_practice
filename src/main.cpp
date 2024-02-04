#include <iostream>

class Square {
  public:
    explicit Square(int size) : size_(size) {};

    int Area() {
      return size_ * size_;
    }

  private:
    int size_;
};

int main(int argc, char* argv[]) {
  Square s = 10;
  // Square s(100);

  std::cout << s.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
