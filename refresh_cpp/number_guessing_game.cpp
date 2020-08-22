#include <iostream>
#include <ctime>

void PlayGameatDifficulty(int difficulty)
{
    std::cout <<"Entering this function" << std::endl;

}

int main()
{
    int difficulty = 2;
    int maxDifficulty = 10;

    while (difficulty <= maxDifficulty)
    {
        PlayGameatDifficulty(difficulty);
        //std::cin.clear();  // clear the screen
        //std::cin.ignore(); // ignoring user input
        ++difficulty;
    }
    std::cout << " You are a master hacker" <<std::endl;
    return 0; // exit with no error code
}