#include <stdio.h>

/**
 *main - cpunt the size of different types
 *print will do that
 *
 *Return: 0 if noting to be sized
 */

int main(void)
{
printf("Size of a char: %lu", sizeof(char));
printf("Size of a int: %lu", sizeof(int));
printf("Size of a long: %lu", sizeof(long));
printf("Size of a float: %lu", sizeof(float));
printf("Size of a long long: %lu", sizeof(long long));
return (0);
}
