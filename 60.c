#include<stdio.h>
void main()
{
    int a,i,nt,t1=0,t2=1;
    printf("enter the value");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
    printf("%d",t1);
    nt=t1+t2;
    t1=t2;
    t2=nt;
    }
}
