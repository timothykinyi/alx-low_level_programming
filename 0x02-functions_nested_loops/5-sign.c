#include "main.h"
# include <stdio.h>
/**
 * print_sign - Entry point
 * @n : number to be checked
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
return (0);
}
