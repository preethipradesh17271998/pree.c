#include<stdio.h>
int main()
{
	int n,m,c;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the number\n");
	scanf("%d",&m);
	c=n+m;
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
