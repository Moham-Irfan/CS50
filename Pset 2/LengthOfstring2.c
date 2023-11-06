#include<stdio.h>
#include<string.h>

void main()
{
    char name[100];
    printf("What is your Name:");
    scanf("%s",&name);

    int n = strlen(name);

    printf("Length:%d",strlen(name));
}