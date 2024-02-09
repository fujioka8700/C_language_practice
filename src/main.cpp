#include <iostream>

template <typename T>
T DoSomething(T a, T b) {
  return a + b;
}

template <>
double DoSomething<double>(double a, double b) {
  return a * b;
}

int main(int argc, char* argv[]) {
  std::cout << DoSomething(2, 3) << std::endl;
  std::cout << DoSomething(2.0, 3.0) << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
