#include <iostream>
#include <math.h>

class Square {
  public:
    explicit Square(int size) : size_(size) {}

    int Area() {
      return pow(size_, 2);
    }
  
  private:
    int size_;
};

int main(int argc, char* argv[]) {
  Square square = static_cast<Square>(10);

  std::cout << square.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
