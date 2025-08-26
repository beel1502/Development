// to check wether if the given num is divisble by given num or not // 
#include <stdio.h>
int main () {
    int di, de; 
    printf("enter dividend : \n");
    scanf("%d", &di);
    printf("enter devisor : \n");
    scanf("%d", &de);

    int x = di%de;
    if (x==0) {
        printf("it is devisible. \n");
    } 
    else {
        printf("it is not devisible. \n");
    }
    return 0;

}