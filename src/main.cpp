#include <iostream>

int main(void) {
    int x = 123;
    int* p = &x;
    int& r = x;

    x = 200;

    std::cout << *p << std::endl;
    std::cout <<  r  << std::endl;

    return 0;
}