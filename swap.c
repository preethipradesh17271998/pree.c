#include<stdio.h>
void main()
{
	int t,a,b;
	printf("\nenter the value of a");
	scanf("%d",&a);
	printf("\nenter the value of b");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("\n the swaped number is%d",a);
	printf("\n the swaped number is%d",b);
}
