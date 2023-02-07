#include <iostream>


int main(){

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
    if (choice==1)
    {
        std::cout << "You Chose to View Balance" << std::endl;
        std::cout << "Your Balance Is: " << balance << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "You Chose to Deposit Money" << std::endl;
        std::cout << "How much would you like to deposit?" << std::endl;
        std::cin >> add;
        std::cout << "Your new Balance is: " << balance+ add << std::endl;

    }
    else if (choice == 3)
    {
        std::cout << "You Chose to Withdraw Money" << std::endl;
        std::cout << "You Chose to Withdraw Money" << std::endl;
        std::cout << "How much would you like to deposit?" << std::endl;
        std::cin >> sub;
        std::cout << "Your new Balance is: " << balance - sub << std::endl;
    }
    else{
        std::cout << "ThankYou Bye!";
    }
} while (choice != 4);



return 0;
}
