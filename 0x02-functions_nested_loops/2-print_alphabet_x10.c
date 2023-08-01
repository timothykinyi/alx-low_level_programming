# include <stdio.h>
# include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int x = 0;
while(x < 10)
{
char lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
putchar('\n');
x++;
}
}
