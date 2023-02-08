#include <iostream>
#include <cmath>

int main()
{

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "$$$Calculator$$$" << std::endl;
    do
    {
        std::cout << "Choose an operand + - * / or press q to quit" << std::endl;
        std::cin >> op;
        if (op == 'q')
        {
            std::cout << "Quitting program";
            break;
        }

        std::cout << "Choose number 1" << std::endl;
        std::cin >> num1;
        if (std::cin.fail() || op == 'q')
        {
            std::cout << "Quitting program";
            break;
        }
        if (std::cin.fail())
        {
            std::cout << "Invalid input, try again!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cout << "Chose number 2" << std::endl;
        std::cin >> num2;
        if (std::cin.fail() || op == 'q')
        {
            std::cout << "Quitting program";
            break;
        }
        if (std::cin.fail())
        {
            std::cout << "Invalid input, try again!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch (op)
        {
        case '+':
            std::cout << "You chose addition" << std::endl;
            std::cout << "The result of addition is: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "You chose subtraction" << std::endl;
            std::cout << "The result of subtraction is: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "You chose multiplication" << std::endl;
            std::cout << "The result of multiplication is: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0)
            {
                break;
            }
            std::cout << "You chose division" << std::endl;

            std::cout << "The result of division is: " << num1 / num2 << std::endl;
            break;
        default:
            std::cout << "Wrong input!" << std::endl;
            break;
        }
    } while (op != 'q');
    return 0;
}
