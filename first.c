#include<stdio.h>
int main()
{
int i,j,k;
    for (i=1;i<=6;i++)
    {
      for(k=i;k<=5;k++)
        {
        printf(" ");
        }  for(j=1;j<=i;j++)
        {
        if(i%2==0)
        {
        printf("# ");
        }
        else
        {
            printf("* ");
                            
        }
        }
        printf("\n");
        }
        getch();
        return 0;
        }