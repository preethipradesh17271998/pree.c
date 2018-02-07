#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value ");
	scanf("%d",&a);
	b=a&(a-1);
	if(b==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
}
