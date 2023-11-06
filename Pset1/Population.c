#include <stdio.h>

void main()
{
    int s,e,y=0;

    do
    {
        printf("Start Populaiton:");
        scanf("%d",&s);
    }
    while (s<0);
    

    do
    {
        printf("End population:");
        scanf("%d",&e);
    }
    while(s>e);
    
    
   
    while(s<e)
    {
        s=s+(s/3)-(s/4);
        y++;
    }

    printf("Years:%d",y);   
}