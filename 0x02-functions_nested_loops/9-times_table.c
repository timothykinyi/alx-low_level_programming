# include "main.h"

void times_table(void)
{
int x, y;
int z;
for (x=0;x < 10;x++)
{
for(y=0;y < 10;y++)
{
z=x*y;
_putchar(x);
if (y != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
