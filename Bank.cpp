#include <iostream>
#include <limits>

int main()
{
    int choice = 0;
    double balance = 0;
    double add;
    double sub;
    do
    {
        std::cout << "Choose an option" << std::endl;
        std::cout << "1.View Balance" << std::endl;
        std::cout << "2.Deposit Money" << std::endl;
        std::cout << "3.Withdraw Money" << std::endl;
        std::cout << "4.Exit" << std::endl;
        std::cin >> choice;
        if (!std::cin)
        {
            std::cout << "Invalid input, try again!"<< std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (choice == 1)
        {
            std::cout << "You Chose to View Balance" << std::endl;
            std::cout << "Your Balance Is: " << balance << std::endl;
        }
        else if (choice == 2)
        {
            std::cout << "You Chose to Deposit Money" << std::endl;
            std::cout << "How much would you like to deposit?" << std::endl;
            std::cin >> add;
            if (add < 0)
            {
                std::cout << "That's not a valid amount:\n";
            }
            else
            {
                balance = balance + add;
                std::cout << "Your new Balance is: " << balance << std::endl;
            }
        }
        else if (choice == 3)
        {
            std::cout << "You Chose to Withdraw Money" << std::endl;
            std::cout << "How much would you like to withdraw?" << std::endl;
            std::cin >> sub;
            if (sub < 0)
            {
                std::cout << "That's not a valid amount:\n";
            }
            else if (balance - sub < 0)
            {
                std::cout << "Insufficient balance. Please deposit money first.\n";
            }
            else
            {
                balance = balance - sub;
                std::cout << "Your new Balance is: " << balance << std::endl;
            }
        }
        else
        {
            std::cout << "Thank you, bye!\n";
        }
    } while (choice != 4);

    return 0;
}
