# include "main.h"
/**
 * print_diagonal - Entry point
 * @n : number being used
 * Return : Always 0 (success)
 */
void print_diagonal(int n)
{
int m, x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
