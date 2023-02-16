#include <stdio.h>

/**
 *main - cpunt the size of different types
 *print will do that
 *
 *Return: 0 if noting to be sized
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a long: %lu byte(s)\n", sizeof(long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
return (0);
}
