# include <stdio.h>
# include "main.h"
# include <ctype.h>
/**
 * _islower - Entry point
 * @c : the character to be cheaked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
