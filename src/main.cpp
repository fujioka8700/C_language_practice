#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
  class Rectangle {
    public:
      int height;
      int width;
  };

  Rectangle rectangle;
  Rectangle* r = &rectangle;
  r->height = 10;
  (*r).height = 20;
  (*r).width = 30;

  std::cout << r->height << std::endl;
  std::cout << (*r).width << std::endl;
  std::cout << r->height << std::endl;
  
  std::cout << "おわり" << std::endl;

  return 0;
}
