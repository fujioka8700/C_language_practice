#include <iostream>

class Counter {
  public:
    static int count_;
};

int Counter::count_ = 10;

int main(int argc, char* argv[]) {
  std::cout << Counter::count_ << std::endl;
  ++Counter::count_;
  std::cout << Counter::count_ << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
