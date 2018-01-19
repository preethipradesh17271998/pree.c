#include<stdio.h>
void main()
{
	int a,b,r,h=0;
	printf("enter the number");
	scanf("%d",a);
  while(a=b)
  {
  if(b!=0)
  {
  r=b%10;
  h+=r*r*r;
  r/=10;
  }
  if(h==a)
  {
  printf("armstrong number");
  }
  else
  {
   printf("not armstrong number");
  }
  }
  }
