#include<stdio.h>
void main()
{
	int m,e,i;
	printf("enter the number");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
	if(m%i==0)
	{
	e++;	
	}
	if(e==2)
	{
	printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
	}
}
