#include <stdio.h>
int main()
{
    int number1, number2, sum;
    printf("Please Enter two numbers: \n");
    scanf("%d",&number1);//input function
    scanf("%d",&number2);//input function


    sum = number1 + number2;
    printf("sum of %d + %d = %d",number1,number2, sum);

/* another system:
    printf("Sum of your numbers is : %d", sum=number1+number2);
    */

    return 0;


}
