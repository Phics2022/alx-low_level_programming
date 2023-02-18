#include <stdio.h>
/*print lower case but no q or e*/
/**
 * main - holding the func for loop
 *for prints the lowercase using continur=e to skip q and e
 *
 *Return: 0
 */
int main(void)
{
char c;
/*lop throuh exit e and q*/
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);

if (c == 'd')
{
c++;
continue;
}
if (c == 'p')
{
c++;
continue;
}

}
putchar('\n');
return (0);
}
