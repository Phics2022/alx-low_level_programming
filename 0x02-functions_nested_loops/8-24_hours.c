#include "main.h"
/**
 * jack_bauer - print time
 *
 *return: 0
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 59; j++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':')
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
}
	  
