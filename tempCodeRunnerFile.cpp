TEMPERATURE CONVERSION
    double temp;
    char unit;

    std::cout << "***** TEMPERATURE CONVERSION ******\n";
    std::cout << "F = Fehrenheit\n";
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
        std::cout << "Enter the temperature in Fahrenhit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "degC\n";
    } 