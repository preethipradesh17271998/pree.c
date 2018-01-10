#include<stdio.h>
int main()
{
	int p,q,s,t=0;
	printf("enter 2 numbers");
	scasnf("%d",&p);
{
q=p;
while(q!=0)
{
	s=q%10;
	t +=s*s*s;
	q!=10;
}
if(t==p)
{
	printf("%d it is armstrong number",p);
}
	else
	{
	printf("%d it is not an armstrong number",p);
	}
	return 0;
}
}	
