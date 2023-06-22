# include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return : Always 0 (success)
 */
void more_numbers(void)
{
int x = 0;
while(x < 10)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
x++;
}
}
