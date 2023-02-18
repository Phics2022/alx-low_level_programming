#include <stdio.h>
/*print lower case but no q or e*/
/**
 * main - holding the func for loop
 *for prints the lowercase using continur=e to skip q and e
 *
 *return null
 */
int main(void)
{
char c;
  /* create lower case loop*/
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
  /* skip q snd e*/
if (c == 'q' || c == 'e')
continue ;
}
putchar('\n');
}
