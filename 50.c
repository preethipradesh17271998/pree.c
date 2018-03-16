#include<stdio.h>
void main()
{
	int n,t=1,i=1;
	scanf("%d",&n);
	while(i<=n/2)
	{
		t=t*2;
		if(t==n)
		{
			printf("\n yes");
			break;
		}
		++i;
	}
}
