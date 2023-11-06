#include<stdio.h>

void main()
{
    int c,s=0;
    do
    {
        printf("Cents Owed:");
        scanf("%d",&c);
    }
    while (c<0);

    do
    {
              
      if (c>25)
        {
            s = c/25;
            c = c%25;
           
        }   

        else if (c>10)
        {
           s = s + (c/10);
           c = c%10;
        
        }

        else if (c>5)
        {
            s = s + (c/5);
            c = c%5;
            
        }

        else
        {
            s = s + c;
            c = 0;
        }
    
    } 
    while (c>0);
  
    printf("%d\n",s);
    
}
