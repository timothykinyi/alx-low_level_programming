# include "main.h"
# include <stdio.h>
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int w, x, y, z;
for (w = 0; w <= 2; w++)
{
for (x = 0; x < 10; x++)
{
for (y = 0; y < 6; y++)
{
for (z = 0; z < 10; z++)
{
if (w >= 2 && x >= 4)
{
break;
}
_putchar(w + 48);
_putchar(x + 48);
_putchar(58);
_putchar(y + 48);
_putchar(z + 48);
_putchar('\n');
}
}
}
}
}
