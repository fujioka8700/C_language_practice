#include <iostream>

enum class Day {
  Sun,  // 0
  Mon,  // 1
  Tue,  // 2
  Wed,  // 3
  Thu,  // 4
  Fri,  // 5
  Sat   // 6
};

int main(int argc, char* argv[]) {
  Day day = Day::Fri;

  std::cout << static_cast<int>(day) << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
