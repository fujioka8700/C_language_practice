#include <iostream>
#include <bitset>

int main(void) {
    unsigned int a = 0x0000000f;

    std::cout << std::showbase << std::hex;
    std::cout << ~a << std::endl;
    std::cout << ~(a << 2) << std::endl;
    
    return 0;
}