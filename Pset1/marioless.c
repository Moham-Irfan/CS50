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
            printf("\n");
        
        }
        
       
    
    
}


//two loop inside loop----Space
//outside loop-----#

/* for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < h ; i++)
    {
        for (int j = 0; j < (h-1); j++)
        {
            printf(" ");
        }
        printf("#");
        
    }
        printf("\n");
    }         */  
    
