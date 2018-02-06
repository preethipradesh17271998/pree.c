#include<stdio.h>
void main()
{
    int a[50],n,i,j,t,x;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    x=n-1/2;
    printf("the average of number is %d",x);
}
