#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print to 98
 *@n: statement
 *
 *return: void
 */
void print_to_98(int n)
{
int k;
if (n >= 0 && n <= 98)
{
for(k = n; k <= 98; k++)
printf("%d, ", k);
putchar('\n');
}
else if (n < 0)
{
for(k = n; k <= 98; k++)
printf("%d, ", k);
putchar('\n');
}
else if (n > 98)
{
for(k = n; k >= 98; k--)
printf("%d, ", k);
putchar('\n');
}
else if (n == 98)
printf("%d", n);
putchar('\n');
}
