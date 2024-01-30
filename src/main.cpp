#include <iostream>
#include <bitset>

int main(void) {
    auto bits_a = std::bitset<8>("00001111");
    std::cout << bits_a << std::endl;
    // std::cout << (bits_a << 5) << std::endl;

    auto bits_b = std::bitset<8>("00111100");
    std::cout << bits_b << std::endl;

    std::cout << (bits_a & bits_b) << std::endl;
    std::cout << (bits_a | bits_b) << std::endl;
    std::cout << (bits_a ^ bits_b) << std::endl;
    
    return 0;
}