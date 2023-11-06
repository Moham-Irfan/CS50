#include <stdio.h>

void main(int ar , char *arv[])
{
        printf("No of Command Line Arguments : %d",ar);

        for (int i = 0; i < ar; i++)
        {
            printf("%s is the %dth argument \n", arv[i],i );
        }
        
        
}