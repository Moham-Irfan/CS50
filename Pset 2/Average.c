#include <stdio.h>
float Average (int counter, int array[]);

const int n=3;

void main()
{
    int score[n];
    /* printf("How many Scores:");
    scanf("%d",&n); */
 
    for (int i = 0; i < n; i++)
    {
        printf("Score:");
        scanf("%d",&score[i]);
    }

    printf("Average:%f", Average(n , score));  
    // This is really imp ... see there 
    // is no [] in after the name of the array
    //when we are calling the helper function
}

float Average (int counter, int array[])
{
    int sum=0;
    for (int i = 0; i < counter; i++)
    {
        sum = sum + array[i];
    }
    
    return (sum / (float)counter) ;
}
    