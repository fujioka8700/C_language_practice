#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  class Rectangle {
    public:
      int height;
      int width;
  };

  Rectangle r;
  r.height = 10;
  r.width = 20;

  std::cout << r.height << std::endl;
  std::cout << r.width << std::endl;
  
  std::cout << "おわり" << std::endl;

  return 0;
}
