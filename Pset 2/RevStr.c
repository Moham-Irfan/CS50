#include <stdio.h>
#include <string.h>
void main()
{
    char name[100], revname[100];
    printf("What you wanna Reverse:");
    scanf("%s",&name);
    int n = strlen(name);
    printf("Reversed:\n");
    for (int i = 0, j = n-1 ; i < n ; i++ , j--)
    {
        printf("%d",i);
        printf("%d",j);
        printf("    %c   ",name[j]);
        revname[i] = name[j];
        printf("%c",revname[i]); 
        printf("\n");
    }
    
    printf("%s",revname);
}