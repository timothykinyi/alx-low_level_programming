# include "main.h"
/**
 * print_square - Entry point
 * @size : number to be cheaked
 * Return : Always 0 (success)
 */
void print_square(int size)
{
int x = 1, y = 1;
while (x <= size)
{
while (y <= size)
{
_putchar('#');
y++;
}
_putchar('\n');
x++;
y = 1;
}
_putchar('\n');
}
