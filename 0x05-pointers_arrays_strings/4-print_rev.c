# include <string.h>
# include "main.h"
/**
 * print_rev - it will print a string in reverse
 * @s : string to be printed
 * Return : nothing
 */
void print_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
