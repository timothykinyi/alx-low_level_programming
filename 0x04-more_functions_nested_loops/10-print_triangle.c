# include "main.h"
/**
 * print_triangle - Entry point
 * @size : number to be used
 * Return Always 0 (success)
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size - x; y > 1; y--)
{
_putchar(32);
}
for (z = 0; z <= x; z++)
{
_putcgar(35);
}
_putchar('\n');
}
}
}
