#include "main.h"
/**
 *_abs - compute absolute values
 *@a: paramater
 *
 *Return: a
 */
int _abs(int a)
{
if (a < 0)
a = -a;
else if (a >= 0)
a = a;
return (a);
}
