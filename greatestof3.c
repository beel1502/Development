#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter your num a,b and c. \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a>b && a>c) {
      printf("a is greatest. \n");
    }
    else if (b>a && b>c) {
      printf("b is greatest. \n");
    }
    else {
      printf("c is greatest. \n");
    }
    return 0;
}