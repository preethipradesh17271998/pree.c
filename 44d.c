#include<stdio.h>
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	if((n>=1)&&(n<=9))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
