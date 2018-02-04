#include<stdio.h>
void main()
{
    int i,c=0,n;
    char a[50]="viji is good girl";
    for(i=0;a[i]!='\0';i++)
{
    if(a[i]!=' '&&a[i]!='\n')
    {
        c++;
    }
}
printf("%d",c);
}
