#include <stdio.h>
  int main()
  {
    int a[10];
    int i;
    int p;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++)
    {
    scanf("%d", &a[i]);
    }
    p= a[0];
    for (i = 0; i < 10; i++)
    {
     if (a[i] > p)
     {
     p = a[i];
    }
    }
    printf(" Greatest of ten numbers is %d", p);
    return 0;
  }
