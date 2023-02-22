#include <stdio.h>

int main(void)
{
  char c;
  int i;
  for (i = 1; i <= 10; i++)
    {
      for (c = 'a'; c <= 'z'; c++)
	putchar(c);
      putchar('\n');
    }
  return (0);
}
