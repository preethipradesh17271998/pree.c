#include<stdio.h>
void main()
{
    int a,nt,t1=0,t2=1,i;
    printf("enter the value");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    printf("%d",t1);
    nt=t1+t2;
    t1=t2;
    t2=nt;
    }
}
