# include "main.h"
/**
 * _isupper - entry point
 * @c : char to be cheaked
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= '2'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
