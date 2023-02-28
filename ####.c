//Sum of given digits
#include<stdio.h>
main()
{
    int n,i, r, sum=0;
    scanf("%d",&n);
    for(i=1; i<=2; i++)
    {
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        printf("%d",sum);
    }
    n=sum+n;
    printf("\n%d", sum);
}