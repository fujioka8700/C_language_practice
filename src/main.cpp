#include <iostream>

int main(void) {
    int x = 123;
    // const int* p = &x;
    // *p = 456;

    int* const p = &x;
    *p = 456;
    // p = nullptr;

    std::cout << *p << std::endl;

    return 0;
}