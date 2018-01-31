#include<stdio.h>
int main()
{
	int a[5],i,j,N,t;
	printf("enter the number");
	scanf("%d",N);
	for(i=0;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
			for(i=0;i<=N;i++)
	{
		printf("\n%d",a[i]);
}
for(j=0;j<=N;j++)
	{
	scanf("%d",&a[j]);
}
	for(j=0;j<=N;j++)
	{
		printf("\n%d",a[j]);
	}
if(a[i]>a[j])
{
	t=a[i];
	a[i]=a[j];
	a[j]=t;

printf("the sorted element is%d",a[j]);
}
	
}
