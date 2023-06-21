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
printf("%d", z);
if (y != 9)
{
if (z <= 9)
{
printf(",");
printf("  ");
}
else if (z >= 10)
{
printf(",");
printf(" ");
}
}
else
{
printf("\n");
}
}
}
}
