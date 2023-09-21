#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    // Seed the random number generator
    srand(time(0));

    int guess;
    int num_of_attempts = 0;

    std::cout << "Welcome to the Smartest Guessing Game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100. Try to guess it." << std::endl;

    do
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        num_of_attempts++;

        if (guess < secretNumber)
        {
            std::cout << "Too low! Try again." << std::endl;
        }
        else if (guess > secretNumber)
        {
            std::cout << "Too high! Try again." << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You've guessed the correct number (" << secretNumber << ") in " << num_of_attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}