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
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}
