# include "main.h"
# include <stdio.h>
11;rgb:0000/0000/0000/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int x, y;
int z;
for (x= 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
z = (x * y);
if (y == 0)
{
printf("%d", z);
}
else
{
if (y != 9)
{
if (z <= 9)
{
printf(",  %d", z);
}
else if (z >= 10)
{
printf(", %d", z);
}
}
else
{
if (z <= 9)
{
printf(",  %d\n", z);
}
else if (z >= 10)
{
printf(", %d\n", z);
}
}
}
}
}
}
