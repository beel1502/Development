#include <stdio.h>
#include <math.h>

int main () {

    int a,b;
    printf("enter power \n");
    scanf("%d", &b);

    printf("enter number \n");
    scanf("%d", &a);

    int power = pow(a,b);
    printf("power is : 100 %d \n", power);
    printf(" \thello world");
    return 0;
}