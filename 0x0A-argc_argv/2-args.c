#include "main.h"
#include <stdio.h>
/**
 *main - print my name
 *@argc: counter
 *@argv: vector
 *
 *Return: void
 */
int main(int argc, char  *argv[])
{
int n;
for (n = 0; n < argc; n++)
printf("%s\n", argv[n]);
return (0);
}
