# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first , second;
for (first = 0; first <= 8; first++)
{
for (second = first + 1; second <= 9; second++)
{
putchar('0' + first );
putchar('0' + second);
if (first != 8 || second != 9)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
