#include <iostream>
#include "counter.hpp"

int main(int argc, char* argv[]) {
  std::cout << Counter::count_ << std::endl;
  ++Counter::count_;
  std::cout << Counter::count_ << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
