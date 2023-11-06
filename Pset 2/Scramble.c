#include <stdio.h>
#include <string.h>
#include <ctype.h>
int computeScramble (char word[]);

void main()
{
    int p1,p2;
    char word1[100]; 
    char word2[100];

    printf("Player 1:");
    scanf("%s",&word1);

    printf("Player 2:");
    scanf("%s",&word2);

    p1 = computeScramble(word1);
    p2 = computeScramble(word2);

    if (p1 > p2)
    {
        printf("Player 1 Wins!");
    }
    else if (p1 < p2)
    {
        printf("Player 2 Wins!");
    }
    else
    {
        printf("Tie!");
    }
    
    
    
}


int computeScramble (char word[])
{
    int n = strlen(word);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        word[i] = tolower(word[i]);

        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'l' ||word[i] == 'n' || word[i] == 'o' || word[i] == 'r' || word[i] == 's' || word[i] == 't' || word[i] == 'u' )
        {
            sum++;
        }
        else if (word[i] == 'd' || word[i] == 'g' )
        {
            sum += 2 ;
        }
        else if (word[i] == 'b' || word[i] == 'c' || word[i] == 'm' || word[i] == 'p')
        {
            sum += 3;
        }
        else if (word[i] == 'f' || word[i] == 'h' || word[i] == 'v' || word[i] == 'w' || word[i] == 'y')
        {
            sum += 4;
        }
        else if (word[i] == 'k')
        {
            sum += 5;
        }
        else if (word[i] == 'j' || word[i] == 'x')
        {
            sum += 8;
        }
        else if (word[i] == 'q' || word[i] == 'z')
        {
           sum += 10;
        }
            
    }
    
    return sum;
}


