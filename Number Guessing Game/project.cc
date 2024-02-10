/*
The project is a simple, interactive game where the player guesses a randomly generated number, receives feedback, and aims to guess correctly in the fewest attempts.

Implementation-

1. Initialization:
Created a class (NumberGuessingGame) to handle game logic.
Generated a random number between 1 and 100 for the player to guess.

2. User Interaction:
Utilized a loop for user input, ensuring valid numeric guesses.
Provided feedback on whether the guess was too high, too low, or correct.

3. Game Logic:
Kept track of the number of attempts.
Congratulated the player on a correct guess, displaying the total attempts.

4. Modularity:
Structured code in a class for better organization.
Random Number Generation:
Function Used: rand()
Purpose: Generates a random number between 1 and 100 for the player to guess.
Details: rand() % 100 + 1 generates a random integer between 1 and 100.

5. Input Validation:
Checked for valid numeric input.
Functions Used: cin.fail(), cin.clear(), cin.ignore()
Purpose: Ensures the user enters a valid numeric guess.
Details: Checks for failed input, clears error state, and ignores remaining characters in case of invalid input.
  */




// Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

class NumberGuessingGame {
private:
    int secretNumber;
    int playerGuess;
    int attempts;

public:
    NumberGuessingGame() {
        // Initialize random seed
        srand(static_cast<unsigned int>(time(nullptr)));

        // Generate a random number between 1 and 100
        secretNumber = rand() % 100 + 1;

        // Initialize other attributes
        playerGuess = 0;
        attempts = 0;
    }

    void playGame() {
        cout << "Welcome to the Number Guessing Game!" << endl;

        do {
            // Get player's guess
            cout << "Enter your guess (between 1 and 100): ";
            cin >> playerGuess;

            // Validate the input
            if (cin.fail()) {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            // Increment the number of attempts
            attempts++;

            // Check if the guess is correct, too high, or too low
            if (playerGuess == secretNumber) {
                cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
            } else if (playerGuess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Too high! Try again." << endl;
            }

        } while (playerGuess != secretNumber);

        cout << "Game Over. Thanks for playing!" << endl;
    }
};

int main() {
    // Create a NumberGuessingGame object and start the game
    NumberGuessingGame game;
    game.playGame();

    return 0;
}
