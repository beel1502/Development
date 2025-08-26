#include <stdio.h>
#include <math.h>
int main () {

    float maths, physics, chemistry, english, cs;

    printf("enter your math's marks :");
    scanf("%f", &maths);

    printf("enter your chemistry's marks :");
    scanf("%f", &chemistry);

    printf("enter your physic's marks :");
    scanf("%f", &physics);

    printf("enter your english's marks :");
    scanf("%f", &english);

    printf("enter your cs's marks :");
    scanf("%f", &cs);
    
    float avg = (maths+physics+chemistry+english+cs)/5;
    
    printf("total marks is : %f \n", maths+physics+chemistry+english+cs);
    printf("your avg is : %f \n", avg);

    if(avg>90) {
        printf("A");
    }
    else if(avg>80 && avg<=90) {
        printf("B");
    }
    else if(avg<=80 && avg>70) {
        printf("C");
    }
    else {
        printf("D");
    }
    return 0;
}