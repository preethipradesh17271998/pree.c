#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter the value");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
}
