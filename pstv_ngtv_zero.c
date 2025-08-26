#include <stdio.h>
int main () {
    int num;
    printf("enter your number : \n");
    scanf("%d", &num);

    if (num>0) {
        printf("positive");
    }
    else if (num==0) {
        printf("zero");
    }
    else {
        printf("negative");
    }
    return 0;
}