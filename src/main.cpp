#include <iostream>
#include <string>
#include <tuple>

int main(int argc, char* argv[]) {
    std::tuple<std::string, int, std::string>person = { "Bob", 20, "USA" };

    // std::cout << std::get<0>(person) << std::endl;

    std::string name;
    int age;
    std::string country;

    std::tie(name, age, country) = person;

    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << country << std::endl;

    // std::cout << std::get<0>()
    
    std::cout << "おわり" << std::endl;

    return 0;
}
