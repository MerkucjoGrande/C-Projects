#include <iostream>
#include <string>

int main()
{

std::string start;
int num;
std::cout << "Almost random number generator" << std::endl;
do
{
    std::cout << "Generate a number ranging from 1-10" << std::endl;
    std::cout << "Press any key to start or 'q' to quit" << std::endl;
    srand(time(0));
    num = rand() % 10 + 1;
    std::getline(std::cin, start);
    std::cout << "Your random number is: " << num << std::endl;

} while (start != "q");
return 0;
}


