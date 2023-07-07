# include <stdio.h>
# include <ctype.h>
# include "main.h"
/**
 *  _isalpha - Entry point
 * @c : character to be cheaked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
