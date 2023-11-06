#include<stdio.h>

void main()
{
    int i=0;
    char name[100];
    printf("Name:");
    scanf("%s",&name);

while (name[i]>0)
{
    i++;
}

/* Here is a Better Condition for while Loop

    while (name[i] != '\0')
    {
        i++;
    } */

printf("%d",i);


    

 
    
}
