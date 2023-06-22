# include "main.h"
/**
 * _isdigit - Entry point
 * @c : number to be cheacked
 * Return : 1 if c is a number and 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
