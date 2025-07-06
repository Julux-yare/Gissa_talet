#include <iostream>
#include <cstdlib>
#include <ctime>

void printWelcome() {
    std::cout << "Välkommen till Gissa talet-spelet!" << std::endl;
    std::cout << "Jag har valt ett tal mellan 1 och 100." << std::endl;
    std::cout << "Försök att gissa det!" << std::endl;
}

int getRandomNumber() {
    return rand() % 100 + 1; // Slumpa tal mellan 1 och 100
}

void playGame(int secret) {
    int guess;
    int attempts = 0;
    do {
        std::cout << "Din gissning: ";
        std::cin >> guess;
        attempts++;
        if (guess > secret) {
            std::cout << "För högt!" << std::endl;
        } else if (guess < secret) {
            std::cout << "För lågt!" << std::endl;
        } else {
            std::cout << "Rätt! Du gissade rätt på " << attempts << " försök." << std::endl;
        }
    } while (guess != secret);
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Initiera slump
    printWelcome();
    int secretNumber = getRandomNumber();
    playGame(secretNumber);
    std::cout << "Tack för att du spelade!" << std::endl;
    return 0;
}
