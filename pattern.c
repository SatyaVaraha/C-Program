#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
    for(i=1,j=3,k=5,l=7;i<=9&&j<=11&&k<=13&&l<=15;i=i+4,j=j+4,k=k+4,l=l+4)
    {
        printf("%d %d %d %d\n",i,j,k,l);
    }
}