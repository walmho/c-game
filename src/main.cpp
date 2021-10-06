//Test Code - first real project!
//This program is a random number guesser

//Including libraries 
#include "test.h"
#include <iostream>
#include <stdlib.h> //srand number generator

int main() {
    //Main code goes here
    srand(time(NULL));
    int randNumber = rand() % 100+1;
    int guess = 0;

    std::cout << number << end1; //debug?

    return 0; //Let's compiler know whether the program was a success or not
}
