#include <stdio.h>
/**
 * main - print game fizzbuss 1 to 100
 * for - using for loop
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
putchar('\n');
return (0);
}
