# include "main.h"
/**
 * print_triangle - Entry point
 * @size : number to be used
 * Return Always 0 (success)
 */
void print_triangle(int size)
{
int a, s = size, x = 1;
while (x <= size)
{
for (a = s-1; a > 0; a--)
{
_putchar(' ');
}
for (a = 1; a < x; a++)
{
_putchar('#');
}
_putchar('\n');
s--;
x++;
}
_putchar('\n');
}
