# include "main.h"

void times_table(void)
{
int x, y, z, u, d;
for (x = 0; x <= 9; x++)
{
_putchar('0');
_putchar(',');
_putchar(" ");
for (y = 0;y <= 9;y++)
{
z = x*y;
if ((z/10)> 0)
{
_putchar((d / 10)+'0');
}
else
{
_putchar(' ');
}
 _putchar((d % 10) + '0');
if (y < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
