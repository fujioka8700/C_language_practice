#include <iostream>

void Print(int x) {
    std::cout << "int: " << x << std::endl;
}

void Print(double x) {
    std::cout << "double: " << x << std::endl;
}

int main(int argc, char* argv[]) {
    Print(5);
    Print(8.4);
    
    return 0;
}
