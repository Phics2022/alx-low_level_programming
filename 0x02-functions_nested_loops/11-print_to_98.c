#include "main.h"
#include <stdio.h>
/**
 *print_to_98
 *@n: statement
 *
 *return: void
 */
void print_to_98(int n)
{
int k;
if (n >=0 && n <=98)
{
for(k = n; k <= 98; k++)
putchar(k);
putchar('\n');
}
else if (n < 0)
{
for(k = n; k <= 98; k++)
putchar(k);
putchar('\n');
}
else if (n > 98)
{
for(k = n; k >= 98; k--)
putchar(k);
putchar('\n');
}
else if (n == 98)
putchar(n);
}
      
