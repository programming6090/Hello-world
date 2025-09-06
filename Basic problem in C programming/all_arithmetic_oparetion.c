#include <stdio.h>
int main(){

    float num1,num2,operation;

    printf("Enter your two numbers: \n");
    scanf("%f",&num1);
    scanf("%f",&num2);

    // operation of + :
    printf("Operation of %.2f + %.2f = %.2f", num1, num2, operation=num1+num2);

     // operation of - :
    printf("\nOperation of %.2f - %.2f = %.2f", num1, num2, operation=num1-num2);

     // operation of * :
    printf("\nOperation of %.2f * %.2f = %.2f", num1, num2, operation=num1*num2);

     // operation of / :
    printf("\nOperation of %.2f / %.2f = %.2f", num1, num2, operation=num1/num2);


     // operation of && :
    printf("\nOperation of %.2f && %.2f = %.2f", num1, num2, operation=num1&&num2);


     // operation of || :
    printf("\nOperation of %.2f || %.2f = %.2f", num1, num2, operation=num1||num2);


    // operation of mod :
     printf("\n\nEnter just integer for mod operation: ");
     int n, m, j;
     scanf("%d",&n);
     scanf("%d",&m);
    printf("\nOperation of %d mod %d = %d",  n,  m, j=n%m);



    return 0;
}
