#include<stdio.h>
void main()
{
    int a,b,t;
    printf("enter the value");
    scanf("%d",&a);
    printf("enter the value");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("the swapped numbers are %d %d",a,b);
}
