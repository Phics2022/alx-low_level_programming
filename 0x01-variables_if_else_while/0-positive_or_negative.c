#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Positive or Negative */
/**
 *main- check if int is +ve or -ve
 *if satement is used to check it
 *
 *Return: 0 if null
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
  /*if true disp 1 if ! disp 0 */
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
