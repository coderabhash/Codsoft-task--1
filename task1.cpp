#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));

    const int MIN = 1;
    const int MAX = 20;
    int randomNumber = std::rand() % (MAX - MIN + 1) + MIN;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to  Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between " << MIN << " and " << MAX  << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in" << attempts<< std::endl;
        }
    } while (guess != randomNumber);

    return 0;
}
