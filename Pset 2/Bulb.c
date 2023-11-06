#include <stdio.h>
#include <string.h>
void main()
{
    char word[100];
    printf("Message:");
    scanf("%s",&word);
    int n = strlen(word);
    int rem[100];
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (word[i]>0)
        {
            // printf("%d     ",word[i]);
            rem[j] = word[i] % 2 ;
            word[i] = word[i] / 2;
            j++;
        }

        for (int k = 0; k < 8-j ; k++)
        {
            printf("0");
        }

        do
        {
            j--;
            printf("%d",rem[j]);
        }   
        while (j > 0);

        printf("\n");
    }
    system("pause");
       
}