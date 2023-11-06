#include<stdio.h>
#include<string.h>


void main()
{
    char name[100];

        printf("Name:");
        scanf("%s",&name);

    int n = strlen(name);
    
    for (int i = 0; i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z' )
        {
            printf("%c", name[i] - 32);
        }

        else
        {
            printf("%c", name[i]);
        }
        
    }
    

}

