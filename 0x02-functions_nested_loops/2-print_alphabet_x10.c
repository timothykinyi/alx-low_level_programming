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
char lower;
while (x < 10)
{
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
putchar('\n');
x++;
}
}
