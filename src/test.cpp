#include "test.h"
#include <time.h>
#include <iostream>

void generateNumber() {
    srand (time(NULL));
    int randNumber = rand() % 100+1;
    int guess = 0;

    std::cout << randNumber;
}