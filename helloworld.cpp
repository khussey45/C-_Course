#include <iostream>

int main()
{
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;

    std::cout << "whats your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    

    std::cout << "hello " << name << '\n';
    std::cout << "You are " << age << " years old";

   
    return 0;
}

// type conversion = converting the value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type