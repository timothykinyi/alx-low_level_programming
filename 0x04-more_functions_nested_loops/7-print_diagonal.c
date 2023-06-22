# include "main.h"
/**
 * print_diagonal - Entry point
 * @n : number being used
 * Return Always 0 (success)
 */
void print_diagonal(int n)
{
int m, x = 1;
while (x <= n)
{
for (m = 1; m < x; m++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
x++;
}
_putchar('\n');
}
