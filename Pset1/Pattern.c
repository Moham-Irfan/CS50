#include<stdio.h>

int main()
{
    int h;
    do
    {
        printf("Height(anything b/w 1 and 8):");
        scanf("%d",&h);
    }
    while (h<0);
    
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
        
    system("pause");
    return 0;
    
}