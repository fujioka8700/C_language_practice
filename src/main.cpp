#include <iostream>

template <typename T>
T Sum(T a, T b) {
  return a + b;
};

int main(int argc, char* argv[]) {
  int result = Sum(1, 2);

  std::cout << result << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
