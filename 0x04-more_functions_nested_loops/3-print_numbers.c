# include "main.h"
/**
 * print_numbers - Entry point
 *
 * Return : Always 0 (success)
 */
void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar (x + '0' );
}
_putchar('\n');
}
