#include <stdio.h>
int main () {
    float num_a, num_b;
    char opr;
    printf("enter num a : \n");
    scanf("%f", &num_a);

    printf("enter opr : \n");
    fflush(stdin);
    scanf("%c", &opr); 

    printf("enter num b : \n");
    scanf("%f", &num_b);

    // '+' for add, '-' for sub, '*' for mult, '/' for div //

    switch (opr) {
        case '+' : printf("sum = %f \n", num_a + num_b);
        break;
        case '-' : printf("diff = %f \n", num_a - num_b);
        break;
        case '*' : printf("prod = %f \n", num_a * num_b);
        break;
        case '/' : printf("quotient = %f \n", num_a / num_b);
        break;
        default : printf("invalid input \n");
    }
    return 0;
}