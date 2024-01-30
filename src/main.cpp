#include <iostream>

int main(void) {
    enum class Day {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    // Day day = Wed;
    Day day = Day::Thu;

    std::cout << static_cast<int>(day) << std::endl;

    return 0;
}