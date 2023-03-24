#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers followed by a new line
 *@separator: seperate ints
 *@n: number of interger passed.
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list new_params;
unsigned int i;
if (separator == NULL)
separator = "";
if (n <= 0)
{
printf("\n");
return;
}
va_start(new_params, n);
for (i = 0; i < n - 1; i++)
{
printf("%d%s", va_arg(new_params, int), separator);
}
printf("%d\n", va_arg(new_params, int));
va_end(new_params);
}
