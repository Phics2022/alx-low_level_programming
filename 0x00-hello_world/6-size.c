#include <stdio.h>

/**
 *main - cpunt the size of different types
 *print will do that
 *
 *Return: 0 if noting to be sized
 */

int main(void)
{
char c;
int i;
long l;
float f;
printf("the size of char is %c\n", sizeof(c));
printf("the size of int is %d\n", sizeof(i));
printf("the size of long is %l\n", sizeof(l));
return (0);
}
