#include<stdio.h>
void main()
{
    int a,n;
    printf("enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        a++;
    }
    printf("no of digits are %d",a);
}
