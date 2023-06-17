# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int h;
for (h = 0 ; h <= 9; h++)
{
putchar(h);
if (h != 9)
{
putchar(',');
putchar(' ');
}
return (0);
}
