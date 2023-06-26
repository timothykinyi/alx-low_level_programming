# include "main.h"
# include <string.h>
/**
 * _strlen - gives the length of a tring
 * @s: characters to be counted
 * Return : length of the *s
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
