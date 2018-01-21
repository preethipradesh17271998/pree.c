#include<stdio.h>
void main()
{
	int a,b,c,sum=0,num,i;
	printf("/n enter the value for a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	for(i=0;i<=c;i++)
	{
		num=a+(i-1)*b;
		sum=num;
		sum=sum+num;
		printf("%d",sum);
	}
}
