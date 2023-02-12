#include <iostream>
#include <string>

int main()
{

    std::cout << "Trivia!" << std::endl;

    std::string questions[] = {"What is the tallest mammal ?",
                            "Who was the first person to walk on the moon ?",
                            "What is the capital city of Australia ? ",
                            "What is the largest ocean in the world?"};

    std::string abcd[][4] = {{"A.Giraffe","B.Elephant","C.Hippopotamus","D.Rhinoceros"},
                        {"A.Neil Armstrong","B.Buzz Aldrin ","C.Michael Collins","D.Yuri Gagarin "},
                        {"A.Sydney","B.Melbourne","C.Brisbane","D.Canberra"},
                        {"A.Atlantic Ocean","B.Indian Ocean","C.Pacific Ocean","D.Arctic Ocean"}};

    char corans [] = {'A', 'A', 'D', 'C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i] << std::endl;
    for (int j = 0; j < sizeof(abcd[i])/sizeof(abcd[i][0]); j++)
    {
        std::cout << abcd[i][j] << std::endl;
    }
    do
    {
        std::cin >> guess;
        guess = toupper(guess);
        if (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D')
        {
            std::cout << "Invalid input. Please enter A, B, C, or D." << std::endl;
        }
    } while (guess != 'A' && guess != 'B' && guess != 'C' && guess != 'D');
    if (guess==corans[i])
    {
        std::cout << "Correct." << std::endl;
        score++;
    }else{
        std::cout << "Wrong." << std::endl;
        std::cout << "Correct answer is: " << corans[i] << std::endl;
    }
}
std::cout << "The Ammount of Questions is: " << size << std::endl;
std::cout << "The Ammount of Correct answers is: " << score << std::endl;
std::cout << (score /(double)size) * 100 << "%" << std::endl;
std::cout << "Thanks For Playing ";
return 0;
}
