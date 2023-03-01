#include "main.h"
#include <stdio.h>
/**
 *print_array - prinat n elements
 *@a:parameter
 *@n : parameter
 *
 *Return: void
 */
void print_array(int *a, int n)
{
int i, j;
for (i = 0; a[i] != '\0'; i++)
;
j = 0;
while (j < n)
{
if (j == n - 1)
{
printf("%d", a[j]);
}
else
{
printf("%d, ", a[j]);
}
j++;
}
}
