# include <stdio.h>
# include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islowers(int c);
int _islower(void)
{
int c='a';
int k=_islowers(c);
if (k==1)
{
return (1);
}else if (k==0)
{
return (0);
}
}


int _islowers(int c)
{
if (islower(c))
{
return (1);
}else
{
return (0);
}
}
