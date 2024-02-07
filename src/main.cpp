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
  Day day1 = static_cast<Day>(1);
  int day2 = static_cast<int>(Day::Tue);
  
  std::cout << static_cast<int>(day1) << std::endl;
  std::cout << day2 << std::endl;

  std::cout << "おわり" << std::endl;

  return 0;
}
