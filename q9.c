#include <stdio.h>
int main()
{
    int k=8;
    
    for (int i=1;i<=2;i++)
    {
        for(int j=1;j<=20;j++)
        printf("*");
        printf("\n");
    }
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=20;j++)
        {
        if(i+j<=7 || i+j>=k)
        {
            printf("*");
        }
        else 
        printf("0");
      
        }
        k+=2;
     printf("\n");
    }
}