# include <stdio.h>
# include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int ch = c;
if ( islower(ch))
{
return (1);
}else
{
return (0);
}
}
