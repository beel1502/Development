#include <stdio.h>

int main () {

    float f;
    printf("enter farenhiet :");
    scanf("%f", &f);

    float c = ((f-32)*5/9);
    printf("%f", c);
    return 0;
}