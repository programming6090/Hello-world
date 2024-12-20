#include <stdio.h>

int main(void)
{
    int pos, neg;

    pos = 1;
    neg = 0;

    //Logical AND operator:
    printf("%d && %d: %d\n", neg, neg, neg && neg);
    printf("%d && %d: %d\n", pos, pos, pos && pos);
    printf("%d && %d: %d\n", neg, pos, neg && pos);
    printf("%d && %d: %d\n", pos, neg, pos && neg);

    //Logical OR operator:
    printf("%d || %d: %d\n", neg, neg, neg || neg);
    printf("%d || %d: %d\n", pos, pos, pos || pos);
    printf("%d || %d: %d\n", neg, pos, neg || pos);
    printf("%d || %d: %d\n", pos, neg, pos || neg);

    //Logical X-OR operator:
    printf("%d ^ %d: %d\n", neg, neg, neg ^ neg);
    printf("%d ^ %d: %d\n", pos, pos, pos ^ pos);
    printf("%d ^ %d: %d\n", neg, pos, neg ^ pos);
    printf("%d ^ %d: %d\n", pos, neg, pos ^ neg);


    return 0;
}
