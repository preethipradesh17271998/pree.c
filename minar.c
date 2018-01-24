#include <stdio.h>
  int main()
  {
    int a[3];
    int i;
    int p;
    printf("Enter 3 values:");
    for (i = 0; i < 3; i++)
    {
    scanf("%d", &a[i]);
    }
    p= a[0];
    for (i = 0; i < 3; i++)
    {
     if (a[i] <p)
     {
     p = a[i];
    }
    }
    printf(" smallest of 3 numbers is %d", p);
    return 0;
  }
