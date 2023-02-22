#include<stdio.h>
void main(){
	    int n,sum=0,digit,tem;
    scanf("%d",&n);
    tem=n;
    while(n!=0)     
    {
    digit=n%10;
    sum=sum+(digit*digit*digit);
    n=n/10;
    }
    if(sum==tem)
    {
    printf("%d is a Armstrong Number",sum);
    }
    else{
    printf("%d is not a Armstrong Number",tem);
    }
}