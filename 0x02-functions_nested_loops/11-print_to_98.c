# include <stdio.h>
# include "main.h"
/**
 * print_to_98 - Entry point
 * @n : number to print from
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int h = n;
if (h < 98)
{
for (h = n; h < 99 ; h++)
{
printf("%d", h);
if (h != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else
{
for (h = n; h > 97 ; h--)
{
printf("%d", h);
if (h != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
}
