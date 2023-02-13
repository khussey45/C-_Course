#include <iostream>
#include <cmath>


int main()
{
   
    double a;
    double b; 
    double c; 

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;
   
    return 0;
}


 // double x = 3.2;
    // double y = 4;
    // double z;

    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x); 
    // z = floor(x);

    // std::cout << z;
// type conversion = converting the value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type

    // cout << (insertion operator)
    // // cin >> (extraction operator)

    // std::string name;
    // int age;

    // std::cout << "whats your age?: ";
    // std::cin >> age;

    // std::cout << "What's your full name?: ";
    // std::getline(std::cin >> std::ws, name);

    

    // std::cout << "hello " << name << '\n';
    // std::cout << "You are " << age << " years old";