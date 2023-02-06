#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cmath>

int main()
{

int num;
int guess;
int tries;

std::cout << "Number Guessing Game" << std::endl;
std::cout << "Guess a number ranging from 1-100" << std::endl;
srand(time(0));
num= rand() % 100 +1;
std::cin >> guess;
tries= 0;


    while (true)
    {

        if (!std::cin >> guess)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choose a number 0-100" << std::endl;
        }
        else if (guess==num)
        {
            tries++;
            std::cout << "You win" << std::endl;
            std::cout << "You're number of guesses is: " << tries << std::endl;
            break;
        }
        else if (guess > num)
        {
            tries++;
            std::cout << "Too high" << std::endl;
            std::cout << "Try Again!" << std::endl;
        }
        else if (guess < num)
        {
            tries++;
            std::cout << "Too low" << std::endl;
            std::cout << "Try Again!" << std::endl;
        }
        std::cin >> guess;
    }



    return 0;
}
