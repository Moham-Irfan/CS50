#include<stdio.h>
int get_height (void);
void pls_print (int h);

void main()
{
    int h = get_height();
    pls_print(h);
}



int get_height (void)
{
    int h;
    do
    {
        printf("Height:");
        scanf("%d",&h);
    }
    while (h<1 || h>8);
}

void pls_print (int h)
{
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


