#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
     char name[100];

    start:
        printf("Name:");
        scanf("%s",&name);
        int n = strlen(name);

        for (int i = 0; i < n; i++)
        {
            if (name[i] >= 'A' && name[i] <= 'Z' )
            {
                printf("%c",name[i]);
            }

            else if (name[i] >= 'a' && name[i] <= 'z')
            {
                printf("%c",name[i] - 32);
            }
            
            else
            {
                clrscr();
                printf("Comon bro, that's not in your name....BE SERIOUS\n");
                goto start;
            }
            
        }  
        printf("\n");
    system("pause");
}