# include "main.h"
# include <stdio.h>
/**
 * print_times_table - Entry point
 * @n : number to check
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int x, y;
int z;
for (x = 0; x < n; x++)
{
for (y = 0; y < n; y++)
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
