#include<stdio.h>
void main(){
	    int n,sum=0,digit,tem;
    scanf("%d",&n);
    tem=n;
    while(n!=0)     
    {
    digit=n%10;
    sum=sum*10+digit;
    n=n/10;
    }
    if(sum==tem)
    {
    printf("%d is a Palindrome Number",sum);
    }
    else{
    printf("%d is not a Palindrome Number",tem);
    }
}