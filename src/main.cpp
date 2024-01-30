#include <iostream>

int main(void) {
    int x = 5;

    for (int i = 0; i < 5; i++)
    {
        ++x;

        std::cout << x << std::endl;
    }
    

    std::cout << "終わり" << std::endl;
    
    return 0;
}