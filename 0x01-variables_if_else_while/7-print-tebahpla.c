#include <stdio.h>
/*print alphabets backward*/
/**
 *main - print alphabet bkwards
 *using for loop
 *
 *Return: 0
 */
int main(void)
{
char c;
/*print bets backwards*/
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
