# include <stdio.h>
# include <string.h>
# include "main.h"
/**
 * puts2 - prints numbers
 * @str: the number to be printed
 * return : nothing
 */
void puts2(char *str)
{
int i;
for (i = 0; i < 10; i++)
{
if (i % 2 == 0)
{
puts(i);
}
else
{
continue;
}
}
