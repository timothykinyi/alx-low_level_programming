# include "main.h"
/**
 * print_line - Entry point
 * @n : number being used
 * Return Always 0 (success)
 */
void print_line(int n)
{
int x = 1;
while (x <= n)
{
_putchar('_');
x++;
}
_putchar('\n');
}
