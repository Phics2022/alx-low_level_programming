#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - sum all the parameters
 *@n: parameter
 *
 *Return: sum;
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
va_list next_param;
if (n <= 0)
return (0);
va_start(next_param, n);
for (i = 0; i < n; i++)
{
sum += va_arg(next_param, int);
}
va_end(next_param);
return (sum);
}
