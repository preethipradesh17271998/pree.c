#include<stdio.h>
int main()
{
	int h1,h2,m1,m2,b1,b2;
	printf("enter the time in hr:min");
	scanf("%d%d",&h1,&m1);
	printf("enter the time in hr:min");
	scanf("%d%d",&h2,&m2);
	b1=h1-h2;
	b2=m1-m2;
	printf("%d\t%d",b1,b2);
return 0;
}
