#include<stdio.h>

int main(void)

{
  printf("we are still coding");
  printf("we are printing the integer number %d here.\n", 4);
  printf("we are printing the floating point number %f here.\n", 4.7);
  printf("we are printing the floating point number %.3f up to 3 digits here.\n",4.7);
  printf("we are printing the floating point number %f through integer format specifier and it is %d.\n", 4.7, 4.7);
  printf("if you see carefully, you have been using \\n and it is called an escape sequence. these are special commands\n");
  printf("such similar commands include: \\n, \\t,\\b and so on\n");
  printf("if you wamt to print a character like \'A\', just writing using %c and done.", 'A');


  return 0;

}
