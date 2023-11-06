#include<stdio.h>

void main()
{
    int h;
    do
    {
        printf("Height:");
        scanf("%d",&h);
    }
    while (h<1 || h>8);
        for (int k = h; k>0; k--)
        {
             for (int i = 0; i < (k-1); i++)
            {
            printf(" ");
            }

            for (int j = 0; j < (h-(k-1)); j++)
            {
                 printf("#");
            }

            printf(" ");

            for (int a = 0; a <= (h-k); a++)
            {
                printf("#");
            }
                      
            printf("\n");
        
        }
        
       
    
    
}

/*  */