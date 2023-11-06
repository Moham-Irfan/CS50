#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key");
        exit(1);
    }

    int n = strlen(argv[1]);

    if (n != 26)
    {
        printf("The key should contain 26 Aphabets");
        exit(1);
    }
    

    for (int i = 0; i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("The key should contain 26 Aphabets");
            exit(1);
        }
        
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (argv[1][i] == argv[1][j] )
                {
                    printf("You can't repeat the same alphabet twice");
                    exit(1);
                } 
            }
            
            
            
        }
    }

    char alphabets[100] = "abcdefghijklmnopqrstuvwxyz" ; 
    char plain[100];
    printf("Plain Text:");
    scanf("%[^\n]s",&plain);
    
    printf("Ciper Text:");
   


    for (int z = 0, length = strlen(plain); z < length ; z++)
    {
        
        for (int k = 0; k < n; k++)
        {
        
            if (islower(plain[z]))
            {
                if (plain[z] == tolower(alphabets[k]) )
                {
                    printf("%c", tolower(argv[1][k]));
                   break;
                }
                    
            } 
            else if (isupper(plain[z]))
            {
                 if (plain[z] == toupper(alphabets[k]))
                {
                    printf("%c", toupper(argv[1][k]));
                   break;
                    
                }
            }
            else
            {
                printf("%c",plain[z]);
                break;
            }
        }
        
    }
}  