#include<stdio.h>
void main()
{
    int i,c=0;
    char a[50]="viji is a girl";
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("count is %d",c+1);
}
