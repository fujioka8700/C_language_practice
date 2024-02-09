#include <iostream>

template <typename T, typename U>
U Sum(T a, U b) {
  return a + b;
};

int main(int argc, char* argv[]) {
  double result = Sum<int, double>(1, 2.5);

  std::cout << result << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
