#include <iostream>
#include <array>
using namespace std;

int main(int argc, char* argv[]) {
    std::array<int, 5>x = {2, 4, 6, 8, 10};

    cout << x[4] << endl;

    // int arr1[3] = {1,2,3};
    // array<int,3>y = {100, 200, 300};
    array<int, 5>y = x;

    cout << y[1] << endl;
    
    cout << "おわり" << endl;

    return 0;
}
