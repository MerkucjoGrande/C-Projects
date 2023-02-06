#include <iostream>
#include <string>

int main()
{
    std::string start;

    std::cout << "Random number generator 0-10" << std::endl;
    do
    {

        std::cout << "Press to any key to generate press q to exit" << std::endl;
        std::getline(std::cin, start);
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        srand(time(NULL));

        int num = rand() % 11; // has to be+1 to be 0-10 if you want to start from 1 do +1

        std::cout << "Your random number is: " << num << std::endl;
    } while (start != "q");

    return 0;
}
