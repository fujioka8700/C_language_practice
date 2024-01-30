#include <iostream>

int main(void) {
    int x = 5;
    bool done = false;

    while (!done)
    {
        std::cout << x << std::endl;

        if (x == 10)
        {
            done = true;    
        }
        
        x++;
    }
    std::cout << "終わり" << std::endl;
    
    return 0;
}