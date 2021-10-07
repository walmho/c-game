//Test Code - first real project!
//This program is a random number guesser

//Including libraries
#include "test.h"
#include <time.h>
#include <iostream>
#include <stdlib.h> //srand number generator

int main() {

    //Main code goes here
    srand (time(NULL));
    int randNumber = rand() % 100+1; //Generates a random number from 1 to 100
    int guess = 0; //Sets up guess variable

    //std::cout << randNumber;

do {
    while (randNumber != guess) {
        std::cout << "Guess a number between 1 and 100: "; //Gets input from after printed text and stores it in the guess variable
        std::cin >> guess;

        if (guess < randNumber) {
            std::cout << "Guess Higher!\n" << std::endl;
            }

        else if (guess > randNumber) {
            std::cout << "Guess Lower!\n" << std::endl;
            }

        else {
            std::cout << "You guessed the Number!" << std::endl;
            exit(0);
            }
    }

} while (randNumber != guess );
return 0; //Lets compiler know whether the program was a success or not
}
