#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the number\n");
	scanf("%d",&b);
	c=a-b;
	if(c%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
