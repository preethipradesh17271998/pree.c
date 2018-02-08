#include<stdio.h>
void main()
{
    int a;
    printf("enter the value ");
    scanf("%d",&a);
    if(a>=3);
    {
        switch(a)
        {
            case 1:
            printf("\n one");
            break;
            case 2:
            printf("\n two");
            break;
            case 3:
            printf("\n three");
            break;
            default :
            printf("\n enter valid number");
            break;
        }
    }
}
