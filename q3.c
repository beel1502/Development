#include <stdio.h>
#include <ctype.h>
int main () {

    char ch;
    printf("input your character :");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("input is a digit. \n");
    }
    else {
        printf("input is not a digit. \n");
    }
    return 0;
}