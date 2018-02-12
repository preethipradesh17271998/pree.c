#include<stdio.h>
void main()
{
	char str[50];
	int a,c=0,i;
	printf("enter the string");
	scanf("%s",&str[i]);
	a=strlen(str);
	for(i=0;i<=a;i++)
	{
		if(str[i]=='0'||str[i]=='1')
		{
			c++;
		}
	}
	if(a==c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	

}
