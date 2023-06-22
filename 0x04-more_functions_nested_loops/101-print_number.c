# include "main.h"
/**
 * print_number - Entry point
 * @n : character to be used
 * Return: Always 0 (Success)
 */ 
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar('0' + (n % 10));
}
