# include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return : Always 0 (success)
 */
void more_numbers(void)
{
int x, w = 0;
while(w < 10)
{
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
w++;
}
}
