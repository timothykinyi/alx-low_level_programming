# include "main.h"
/**
 * print_last_digit - Entry point
 * @c : character to be cheacked
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
int last = c % 10;
_putchar(last + 48);
return (last);
}
