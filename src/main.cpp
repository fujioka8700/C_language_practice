#include <iostream>

int main(void) {
    int  x =  5;
    int* p = &x;
    int  y = *p;

    x = 10;

    std::cout << "x=" <<  x << std::endl;
    std::cout << "p=" << *p << std::endl;
    std::cout << "y=" <<  y << std::endl;

    return 0;
}