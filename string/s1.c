/* write a program using getc function */
#include <stdio.h>

void main()
{
    int ch;
    printf("please type in one charracter \n");
    ch = getc(stdin);
    printf("the character you just entered is %c\n", ch);
    printf("%d\n", ch);
}