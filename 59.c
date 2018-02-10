#include<stdio.h>
void main()
{
    int a[10],n,i,p;
    printf("enter the number ");
    for(i=0;i<=10;i++)
    {
    scanf("%d",&a[i]);
    }
    p=a[0];
    for(i=0;i<=10;i++)
    {
        if(a[i]>p)
        {
            p=a[i];
        }
    }
    printf("greater number is %d",p);
    
}
