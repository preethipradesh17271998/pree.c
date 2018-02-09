#include<stdio.h>
void main()
{
    int i,e=0,d=0;
    char a[50]="hai viji 123.";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            d++;
        }
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
            e++;
        }
    }
    if(d>=1&&e>=1)
    {
        printf("yes");
    }
    
}
       
