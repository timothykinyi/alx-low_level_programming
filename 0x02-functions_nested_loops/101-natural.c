# include <stdio.h>
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, total = 0;
for (k = 0; k < 1024; k++)
{
if (((k % 3) == 0) || ((k % 5) == 0))
{
total += k;
}
}
printf("%d\n", total);
return (0);
}
