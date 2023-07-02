#include <iostream>
#include <cmath>


int main()
{
    
    

    
   
  


//TEMPERATURE CONVERSION
    double temp;
    char unit;

    std::cout << "***** TEMPERATURE CONVERSION ******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp + 32.0);
        std::cout << "Temperature is: " << temp << "degF\n";
    }
    else if(unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "degC\n";
    } 

      return 0;
}

    // std::cout << "*******************************";
 // // CALCULATOR PROGRAM

    // char op;
    // double num1;
    // double num2;
    // double result;

    // std::cout << "************* CALCULATOR ************* \n";

    // std::cout << "Enter an operator (+, -, *, /): " ;
    // std::cin >> op;

    // std::cout << "Enter #1: ";
    // std::cin >> num1;

    // std::cout << "Enter #2: ";
    // std::cin >> num2;

    // switch (op)
    // {
    // case '+':
    //     result = num1 + num2;
    //     std::cout << "Result: " << result << '\n';
    //     break;
    // case '-':
    //     result = num1 - num2;
    //     std::cout << "Result: " << result << '\n';
    //     break;
    // case '*':
    //     result = num1 * num2;
    //     std::cout << "Result: " << result << '\n';
    //     break;
    // case '/':
    //     result = num1 / num2;
    //     std::cout << "Result: " << result << '\n';
    //     break;
    
    // default:
    //     std::cout << "Enter a valid operator";
    //     break;
    // }








// double a;
    // double b; 
    // double c; 

    // std::cout << "Enter side A: ";
    // std::cin >> a;

    // std::cout << "Enter side B: ";
    // std::cin >> b;

    
    // c = sqrt(pow(a, 2) + pow(b, 2));

    // std::cout << "side C: " << c;

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