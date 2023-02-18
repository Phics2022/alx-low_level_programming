#include <stdio.h>
/* print lower and upper case alphabets */
/**
 *main - print lovwer and upper case alphabet
 *for using 3 creating a new line after
 *
 *Return: 0
 */
int main(void)
{
char c;
/*print lowercase*/
for (c = 'a'; c <= 'z'; c++)
putchar(c);
  /*print upper case*/
for (c ='A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
