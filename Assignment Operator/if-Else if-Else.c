#include <stdio.h>

int main(void)
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);


    if(marks >= 40 && marks < 50)
    {
        printf("You got 'D'");
    }
    else if(marks >= 50 && marks < 60)
    {
        printf("You got 'C'");
    }
    else if(marks >= 60 && marks < 70)
    {
        printf("You got 'B'");
    }
    else if(marks >= 70 && marks < 80)
    {
        printf("You got 'A'");
    }
    else if(marks >= 80 && marks < 90)
    {
        printf("You got 'A'");
    }
    else if(marks >= 90 && marks <= 100)
    {
        printf("You got 'GOLDEN'");
    }
    else if(marks < 40)
    {
        printf("You have failed");
    }
    else if (marks > 100 || marks < 0)
    {
        printf("Invalid input. (Obtained marks cannot be over 100 and under 0)");

    }


    return 0;
}
