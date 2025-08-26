// vowel or constant //
#include <stdio.h>
int main () {
    char alpha;
    printf("enter alphabet :\n");
    scanf("%c", &alpha);

    if (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u') {
        printf("it is vowel \n");
    }
    else {
        printf("it is a consonent \n");
    }
    return 0;
}