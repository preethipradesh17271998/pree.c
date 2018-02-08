#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("the nearestnumber is %d",a-1);
    }
    else
    {
        printf("the number is %d",a-2);
    }
}
