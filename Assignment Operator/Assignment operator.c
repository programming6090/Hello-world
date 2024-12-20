/*The value 5 was assigned to the variable a using the operator
"=" which is on assignment operator.
check the output of the following code where different
 assignment operator are used: */

#include <stdio.h>

int main(void)
{
    int a;

    // value 5 is assigned a
    a = 5;
    printf("The value of a is: %d\n", a);
    getchar();

    // 3 is added to the already existing a
    a += 3;
    printf("The value of a is: %d\n", a);
    getchar();

    // 9 is multiplied with the already existing a
    a *= 9;
    printf("The value of a is: %d\n", a);
    getchar();

    // 6 is divided from the already existing a
    a /= 6;
    printf("The value of a is: %d\n", a);
    getchar();

    // the remainder of dividing a by 4
    a %= 4;
    printf("The value of a is: %d\n", a);
    getchar();

    return 0;

}
