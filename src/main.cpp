#include <iostream>

class Base {
  public:
    virtual ~Base() {}
};

class Sub : public Base {};

int main(int argc, char* argv[]) {
  Sub* s = dynamic_cast<Sub*>(new Base());

  std::cout << s << std::endl;
  
  std::cout << "おわり" << std::endl;

  return 0;
}
