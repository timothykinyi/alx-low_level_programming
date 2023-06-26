# include "main.h"
# include <string.h>
/**
 * _strlen - gives the length of a tring
 * @s: characters to be counted
 * Return : Always 0 (success)
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
