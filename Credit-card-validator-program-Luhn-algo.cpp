#include <iostream>
#include <string>

int getDigit(const int lastnums);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    while (true)
    {
        std::cout << "Enter your card number to check validity" << std::endl;
        int result = 0;
        std::string cardnum;
        std::cin >> cardnum;

        bool isNum = true;
        for (char c : cardnum)
        {
            if (!isdigit(c))
            {
                isNum = false;
                break;
            }
        }
        if (cardnum.length() != 16 || !isNum)
        {
            std::cout << "Invalid input: please enter 16 digits only" << std::endl;
        }
        else
        {
            result = sumEvenDigits(cardnum) + sumOddDigits(cardnum);

            if (result % 10 == 0)
            {
                std::cout << cardnum << " is valid";
            }
            else
            {
                std::cout << cardnum << " is not valid";
            }
            break;
        }
    }
    return 0;
}

int getDigit(const int lastnums)
{
    return lastnums % 10 + (lastnums / 10 % 10);
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
