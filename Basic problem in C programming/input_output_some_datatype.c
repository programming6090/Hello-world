#include <stdio.h>
int main()
{
    char character;
    int intager;
    float float_type;

    printf("Please Enter your character: ");
    scanf("%c",&character);
    printf("Your Character is: '%c' \n" ,character);

    printf("\nPlease Enter your intager: ");
    scanf("%d",&intager);
    printf("Your integer number is: '%d' \n" ,intager);

    printf("\nPlease Enter your float Nnmber: ");
    scanf("%f",&float_type);
    printf("Your float number is: '%.3f' \n" ,float_type);


    return 0;
}
