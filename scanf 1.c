
#include <stdio.h>
int main(void)
{
    int num1;
    float num2;
    double num3;
    char num4;


    printf("please enter the number: ");
    scanf("%d %f %lf %c", &num1, &num2, &num3, &num4);

    printf("numbers are: %d\n %.3f\n %.3lf\n %c\n", num1, num2, num3, num4);


    return 0;
}
