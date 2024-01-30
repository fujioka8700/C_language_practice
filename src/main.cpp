#include <iostream>

int main(void) {
    enum Day {
        Sun,
        Mon,
        Tue,
        Wed,
        Thu,
        Fri,
        Sat
    };

    Day day = Wed;

    std::cout << day << std::endl;

    return 0;
}