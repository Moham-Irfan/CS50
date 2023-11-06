#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void main()
{
    // Generating a random number between 1 and 765

    srand(time(NULL));

    int lowerLimit = 1;
    int upperLimit = 765;
    int number = rand();

    number = (number % (upperLimit - lowerLimit + 1) ) + lowerLimit ;

    //printf("%d",number);

    // Getting the contents of the line number (that i found above) 
    // from the file words.txt


    FILE *fptr = fopen("words.txt","r");

    bool keepReading = true;
    int currentLine = 1;
    int lineToRead = number;
    char word[100];

   while (keepReading)
   {
        fgets(word , 100 , fptr );

        if (currentLine == lineToRead)
        {
            keepReading = false;

        }

        currentLine++;  
   }

   fclose(fptr);

    printf("Have a random 5 letter word : %s ", word);

    

}