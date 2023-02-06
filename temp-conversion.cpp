#include <iostream>
#include <cmath>

int main()
{

    double temp;
    char unit;
    bool valid_input = false;
    
    std::cout << "!!!Temperature conversion!!!" << std::endl;
    std::cout << "Convert C to F or F to C (C/F):" << std::endl;
while (!valid_input)
{
    std::cin >> unit;

    if (unit == 'C' || unit == 'c')

    {
        valid_input = true;
        std::cout << "Converting Celcius to Fahrenheit" << std::endl;
        std::cout << "Type temperature in Celcius" << std::endl;
        std::cin >> temp;
        std::cout << temp * 1.8 + 32 << "F" << std::endl;
    }
    if (unit == 'F' || unit == 'f')

    {
        valid_input = true;
        std::cout << "Converting Fahrenheit to Celcius" << std::endl;
        std::cout << "Type temperature in Fahrenheit" << std::endl;
        std::cin >> temp;
        std::cout << (temp - 32) * 0.5556 << "C" << std::endl;
    }
    else
    {
        std::cout << "Invalid, type F or C" << std::endl;
    }
}
    return 0;
}
