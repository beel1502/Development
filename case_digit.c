// check wether the input is uppercase or lowercase or digit or a special symbol //
#include <stdio.h>
#include <ctype.h> // for using isupper || islower || isdigit //
int main () {

    char ch;
    printf("input your character :");
    scanf("%c", &ch);

    if (isdigit(ch)) {
        printf("input is a digit. \n", ch);
    }
    else if (isupper(ch)) {
        printf("input is an uppercase letter. \n", ch);
    }
    else if (islower(ch)) {
        printf("input is a lowercase letter. \n", ch);
    }
    else {
        printf("input is a special symbol.", ch);
    }
    return 0;
}