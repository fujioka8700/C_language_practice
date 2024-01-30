#include <iostream>

int main(void) {
    int x = 5;
    bool done = false;

    do
    {
        std::cout << x << std::endl;

        if (x == 10)
        {
            done = true;    
        }

        x++;
    } while (!done);

    std::cout << "終わり" << std::endl;
    
    return 0;
}