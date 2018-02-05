#include<stdio.h>
void main()
{
    int i,c=0,n;
    char a[50]="viji is good.1234";
    for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='0'&&a[i]<='9')
    {
        c++;
    }
}
printf("%d",c);
}
