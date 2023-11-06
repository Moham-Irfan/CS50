#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{   srand(time(NULL));
    int number = rand();
    int lowerLimit = 90;
    int upperLimit = 100;
    number = (number % (upperLimit - lowerLimit + 1) ) + lowerLimit ;

    printf("The random number between 0 to 100 : %d ", number % upperLimit );
}