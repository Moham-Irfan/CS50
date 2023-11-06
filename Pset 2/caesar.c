#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");l̥ey6
        exit(1);
    }

    for (int i = 0, n=strlen(argv[1]) ; i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            exit(1);
        }
        
    }

    int key = atoi(argv[1]);

    char plain[100];
    printf("Plain text:");
    scanf("%[^\n]s",&plain);
    printf("Cipher Text:");

    int length = strlen(plain);

    for (int j = 0 ; j < length ; j++)
    {
        if (islower(plain[j]))
        {
            plain[j] = plain[j] - 97;
            printf("%c",((plain[j] + key) %26) +97 );
        }
        else if (isupper(plain[j]))
        {
            plain[j] = plain[j] - 65;
            printf("%c",((plain[j] + key) %26) +65 );
        }
        else
        {
            printf("%c",plain[j]);
        }   
    }
    
}