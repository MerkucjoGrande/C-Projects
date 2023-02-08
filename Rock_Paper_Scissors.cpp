#include <iostream>
#include <limits>

int main()
{

int choice;



std::cout << "Rock/Paper/Scissors" << std::endl;
do
{


std::cout << "Choose an option" << std::endl;
std::cout << "1 for Rock" << std::endl;
std::cout << "2 for Paper" << std::endl;
std::cout << "3 for Scissors" << std::endl;
std::cout << "4 to exit" << std::endl;
std::cin >> choice;
if (!std::cin)
{
    std::cout << "Invalid input, try again!" << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    continue;
}
if (choice==1)
{
    std::cout << "You chose Rock " << std::endl;
}
else if (choice == 2)
{

    std::cout << "You chose Paper " << std::endl;
}
else if (choice == 3)
{
    std::cout << "You chose Scissors " << std::endl;
}
else{
    std::cout << "Thanks for playing " << std::endl;
}
} while (choice!=4);


return 0;
}
