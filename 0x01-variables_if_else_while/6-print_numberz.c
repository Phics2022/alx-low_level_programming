#include <stdio.h>
/* print numbers */
/**
 *main - print the numbers in a loop
 *using putchar
 *
 *Return: 0
 */
int main(void)
{
int i;
/*print number using putchar*/
for (i = 0; i < 10; i++)
putchar('0' + i);
putchar('\n');
return (0);
}
