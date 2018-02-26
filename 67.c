#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number\n");
	scanf("%d",&a);
	printf("enter the number\n");
	scanf("%d",&b);
	if(a>b)
    {
    	c=a-b;
    	printf("the number is %d",c);
    }
    else
    {
    	c=b-a;
    	printf("the number is %d",c);
    }
	
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
