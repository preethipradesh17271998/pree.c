#include<stdio.h>
void main()
{
	int a;
	printf("enter the value ");
	scanf("%d",&a);
	while(a%10!=0)
	{
		a++;
	}
	printf("nearset number is %d",a);
}
