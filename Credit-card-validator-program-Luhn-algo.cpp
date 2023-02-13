#include <iostream>
#include <string>


/*Luhn algorithm
1. Double every second digit from right to left If doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add all odd numbered digits from right to left
4. summ results from steps 2 & 3
5. If step 4 is divisible by 10, # is valid
Work in Progres*/

int main()
{
    std::string cardnum;
    std::cout << "Credit-card-validator-program" << std::endl;
    while (true)
    {
        std::cout << "Enter your card number to check validity" << std::endl;
        std::cin >> cardnum;
        if (cardnum.length() != 16)
        {
            std::cout << "Invalid input: length must be 16" << std::endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
