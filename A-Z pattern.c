#include<stdio.h>
main ()
{
    int n,i;

    for(i=65;i<=90;i++)
    {
        for(n=65;n<=i;n++)
        {
            printf("%c ",n);
        }
        printf("\n");
    }

}