#include <iostream>
#include <limits>
#include <ctime>

int main()
{
    int choice;

    std::cout << "Rock/Paper/Scissors" << std::endl;
while (choice != 4)
{
        std::cout << "Choose an option" << std::endl;
        std::cout << "1 for Rock" << std::endl;
        std::cout << "2 for Paper" << std::endl;
        std::cout << "3 for Scissors" << std::endl;
        std::cout << "4 to Exit" << std::endl;
        std::cin >> choice;

        if (std::cin.fail() || (choice != 1 && choice != 2 && choice != 3 && choice != 4))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid option." << std::endl;
            choice = 0;
            continue;
        }

        if (choice == 4)
        {
            std::cout << "Thankyou For Playing." << std::endl;
            break;
        }

    switch (choice)
    {
    case 1:
        std::cout << "You choose Rock " << std::endl;
        break;
    case 2:
        std::cout << "You choose Paper " << std::endl;
        break;
    case 3:
        std::cout << "You choose Scissors " << std::endl;
        break;
        
    }
    srand(time(0));
    int comp = rand() % 3 + 1;

    if (comp==1 && choice==3)
    {
        std::cout << "Your opponent chose Rock " << std::endl;
        std::cout << "Rock beats Scissors " << std::endl;
        std::cout << "You Lose " << std::endl << std::endl;
    }
    else if (comp == 1 && choice == 2)
    {
        std::cout << "Your opponent chose Rock " << std::endl;
        std::cout << "Paper beats Rock " << std::endl;
        std::cout << "You win " << std::endl << std::endl;
    }
    else if (comp == 1 && choice == 1)
    {
        std::cout << "Your opponent chose Rock " << std::endl;
        std::cout << "Tie, go again " << std::endl << std::endl;
    }
    else if (comp == 2 && choice == 3)
    {
        std::cout << "Your opponent chose Paper " << std::endl;
        std::cout << "Scissors beat Paper " << std::endl;
        std::cout << "You Win " << std::endl  << std::endl;
    }
    else if (comp == 2 && choice == 1)
    {
        std::cout << "Your opponent chose Paper " << std::endl;
        std::cout << "Paper beats Rock " << std::endl;
        std::cout << "You Lose " << std::endl << std::endl;
    }
    else if (comp == 2 && choice == 2)
    {
        std::cout << "Your opponent chose Paper " << std::endl;
        std::cout << "Tie, go again " << std::endl  << std::endl;
    }
    else if (comp == 3 && choice == 2)
    {
        std::cout << "Your opponent chose Scissors " << std::endl;
        std::cout << "Scissors beat Paper " << std::endl;
        std::cout << "You Lose " << std::endl << std::endl;
    }
    else if (comp == 3 && choice == 1)
    {
        std::cout << "Your opponent chose Scissors " << std::endl;
        std::cout << "Rock beat Scissors " << std::endl;
        std::cout << "You Win " << std::endl << std::endl;
    }
    else if (comp == 3 && choice == 3)
    {
        std::cout << "Your opponent chose Scissors " << std::endl;
        std::cout << "Tie, go again " << std::endl << std::endl;
    }
}
    return 0;
}
