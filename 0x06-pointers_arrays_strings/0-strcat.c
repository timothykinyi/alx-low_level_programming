# include "main.h"
# include <string.h>
/**
 * _strcat - concatinates two strings
 * @dest : first string to be concatinated
 * @src : first string to be concatinated
 * Return : dest
 */
char *_strcat(char *dest, char *src)
{
strcat(*dest, *src);
return (dest);
}
