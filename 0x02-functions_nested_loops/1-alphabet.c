# include <stdio.h>
# include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char lower;
for(lower = 'a';lower <= 'z';lower++)
{
putchar(lower);
}
putchar('\n');
}
