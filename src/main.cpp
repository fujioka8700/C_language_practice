#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  class Rectangle {
    public:
      int Area() {
        return height * width;
      }

      int height;
      int width;
  };
  
  Rectangle r;
  r.height = 10;
  r.width = 20;

  std::cout << r.Area() << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
