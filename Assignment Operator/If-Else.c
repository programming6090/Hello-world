#include <stdio.h>

int main(void)
{
    int marks;

    //Ask the user to provide marks and input it:
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 40)
    {
        printf("You have passed.");
    }
    else
    {
        printf("You have failed.");
    }

    return 0;
}
