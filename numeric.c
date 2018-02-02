#include<stdio.h>
void main()
{
int a;
printf("enter the value");
scanf("%d",&a);
if(a>='0'||a<='9')
{
printf("numeric");
}
else
{
printf("given sring is character");
}
}
