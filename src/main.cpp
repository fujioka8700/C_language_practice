#include <iostream>

class NonCopyable {
  public:
    NonCopyable() = default;
    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};

int main(int argc, char* argv[]) {
  NonCopyable n1;
  // NonCopyable n2 = n2;
  NonCopyable n3;
  // n3 = n1; // n3.operator=(n1)

  std::cout << "おわり" << std::endl;

  return 0;
}
