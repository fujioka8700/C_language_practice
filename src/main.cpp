#include <iostream>

int main() {
    // const int x = 5;
    // constexpr int x = 5;
    auto x = 5;

    x = 10;

    std::cout << x << std::endl;

    bool ok = false;

    std::cout << ok << std::endl;

    char y = 'y';

    std::cout << y << std::endl;

    return 0;
}