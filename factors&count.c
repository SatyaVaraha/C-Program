#include<stdio.h>
main ()
{
    int n,i,cnt=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf(" %d",i);
            cnt++;
        }
    }
    printf("\t\nTotal Factors are: %d",cnt);
}