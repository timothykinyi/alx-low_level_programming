# include <stdio.h>
# include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower ++;
}
putchar('\n');
}
