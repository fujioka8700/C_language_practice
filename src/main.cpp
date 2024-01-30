#include <iostream>

int main(void) {
    int x = 7;

    switch (x)
    {
    case 5:
        std::cout << "5です" << std::endl;
        break;
    case 6:
        std::cout << "6です" << std::endl;
        break;
    default:
        std::cout << "5と6以外です" << std::endl;
        break;
    }
    
    return 0;
}