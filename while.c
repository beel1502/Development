// multiplication table of a given number //
#include <stdio.h>
int main () {
    int num;
    printf("enter your number : \n");
    scanf("%d", &num);
    int i=1;
    while (i<11) {
        printf("%d \n", num*i); i++;
    }
    return 0;
}