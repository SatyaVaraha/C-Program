#include<stdio.h>
#include<conio.h>
 void main()
{
int num, temp, digit, sum=0;
clrscr();
printf("enter a number");
scanf("%d", &num);
temp=num;
while(temp!=0)
{
digit=temp%10;
sum=sum+(digit*digit*digit);
temp=temp/10;
}
if(sum==num)
printf("%d is an armstrong number",num);
else
printf("%d is not an armstron number", num);
getchar();
}