#include<stdio.h>
void main()
{
    int a,n,i,c=0;
    printf("enter the value");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
    if(a%i==0)
    {
        c=1;
    }
    }
    if(c==1)
    {
    printf("composite number");
    }
    else
    {
        printf("prime number");
    }
}
