#include<stdio.h>
int main()
{
	int i,j,n,a[5],r,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				r=a[i];
				a[i]=a[j];
				a[j]=r;
			}
		}
}
x=(n+1)/2;
printf("the madian element is %d",x);
return 0;
}

