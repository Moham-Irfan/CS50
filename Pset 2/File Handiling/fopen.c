#include <stdio.h>
#include <stdbool.h>
int main()
{
    char str[100];
    int lineToRead = 0;
    int currentLine = 1;
    int lineMax = 1000;

    FILE *fptr = fopen("file.txt" , "r");
    
    printf("Which line you want to read :");
    scanf("%d",&lineToRead);

    bool keepReading = true;

   do 
  {
    // read the next line from the file, store it into buffer
    fgets(str, lineMax, fptr);

    // if we've reached the end of the file, we didn't find the line
    if (feof(fptr))
    {
      // stop reading from the file, and tell the user the number of lines in 
      // the file as well as the line number they were trying to read as the 
      // file is not large enough
      keepReading = false;
      printf("File has %d lines.\n", currentLine-1);
      printf("Couldn't find line %d.\n", lineToRead);
    }
    // if we've found the line the user is looking for, print it out
    else if (currentLine == lineToRead)
    {
      keepReading = false;
      printf("Line no %d :\n%s", currentLine , str);
    }

    // continue to keep track of the current line we are reading
    currentLine++;

  } while (keepReading);
        
        
   }

   // printf("Line no %d : %s\n ", i , str );
    






    
   
        
        

    
    
    
    




    //     fptr = fopen("file.txt" , "r");
    //     fgets(str , 100, fptr);
    //     //fscanf(fptr, "%s" , &str);
    
    //     printf("%s", str);
    //    // fclose(fptr);