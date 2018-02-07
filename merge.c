#include<stdio.h>
void main()
{
    int i,j,a[50],n,t,x,y;
    printf("enter the value");
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
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    x=(n+1)/2;
    y=((n/2)+((n+1)/2))/2;
    if(n%2==0)
    {
    printf("middle number is %d",x);
    }
    else
    {
    	printf("mid num %d",y);
    }
}
 
