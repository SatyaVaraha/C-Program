#include<stdio.h>
void main(){
	    int n,sum=0,digit,tem;
    printf("Enter the Number:");
    scanf("%d",&n);
    tem=n;
    while(n!=0)     
    {
    digit=n%10;
    sum=sum*10+digit;
    n=n/10;
    }
    printf("Reverse: %d",sum);
    
}