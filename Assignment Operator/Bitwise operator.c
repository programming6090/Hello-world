#include <stdio.h>

int main(void)
{
    int nam1, nam2;
    nam1 = 3;
    nam2 = 5;


    printf("Bitwise AND operator: %d\n", nam1 & nam2);

    printf("Bitwise OR operator: %d\n", nam1 | nam2);

    printf("Bitwise X-OR operator: %d\n", nam1 ^ nam2);

    printf("Bitwise NOT operator: %d, %d\n", ~nam1, ~nam2);

    printf("Bitwise Right Shift (by 1) operator: %d, %d\n", nam1 >> 1, nam2 >> 1);

    printf("Bitwise Left Shift (by 1) operator: %d, %d\n", nam1 << 1, nam2 << 1);


    return 0;
}
