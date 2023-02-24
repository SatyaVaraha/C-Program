#include<stdio.h>
main()
{
    int i, j, n;
    scanf("%d",&n);
    for(i=1,j=10; i<=n&&j>=1; i++,j--)
    {
        printf("\n%d \t%d",i,j);
    }
}