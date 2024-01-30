#include <iostream>

int main(void) {
    int x = 7;

    if (x == 5)
    {
        std::cout << "xは5です" << std::endl;
    } else if (x == 6)
    {
        std::cout << "xは6です" << std::endl;
    } else
    {
        std::cout << "xは5と6ではありません" << std::endl;
    }
    
    return 0;
}