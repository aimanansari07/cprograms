// write a program using getchar function

#include <stdio.h>
void main()
{
    int ch 1;
    int ch2;
    printf("please type in two character \n");
    ch1 = getc(stdin);
    ch2 = getchar();
    printf("the first character you just entered is %c\n", ch1);
    printf("the second character you just entered is %c\n", ch2);
}