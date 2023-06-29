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
int i = 0,j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
