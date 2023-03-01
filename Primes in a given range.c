//prime range
#include<stdio.h>
void main()
{
	int i,j,range,fact=0,count=0;
	printf("enter the range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		for(j=1;j<=i;j++)
		if(i%j==0)
		fact++;
		if(fact==2)
		{
		printf("%d\n",i);
		count++;
		}
		fact=0;
	}
	printf("the total primes in the given range is %d",count);							
}