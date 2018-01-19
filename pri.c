#include<stdio.h>
void main()
{
	int a,b,c,i,h;
	printf("enter the first interval");
	scanf("%d",a);
	printf("enter the second interval");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
	for(h=1;h<=b;h++)
	{
		if(i%h==0)
		{
			printf("the number is prime number");
		}
		else
		{
			printf("not a prime number");
		}
	}
	}
	}
