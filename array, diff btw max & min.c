#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,max,min,dif;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    max=min=a[0];
    for(i=1; i<n; i++) {
        if(a[i]<min)
            min=a[i];
    }
    for(i=1; i<n; i++) {
        if(a[i]>max)
            max=a[i];
    }
    dif=max-min;
    printf("Difference is %d",dif);

    return 0;
}