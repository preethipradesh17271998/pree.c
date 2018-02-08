#include<stdio.h>
void main()
{
    int a,r,sum=0;
    printf("enter the value ");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        sum=sum+r;
    }
    printf("%d",sum);
}
