#include "main.h"
/**
 *_strcmp - compare strings
 *@s1: parameter
 *@s2: parameter
 *
 *Return: diff
 */
int _strcmp(char *s1, char *s2)
{
int i, j, diff;
for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
{
if (s1[i] == s2[j])
continue;
else
diff = s1[i] - s2[j];
return (diff);
}
return (0);
}
