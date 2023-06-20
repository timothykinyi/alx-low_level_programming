# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c);
int main(void)
{
int c='a';
int k=_islower(c);
if (k==1)
{
return (1);
}else if (k==0)
{
return (0);
}
}


int _islower(int c)
{
if (islower(c))
{
return (1);
}else
{
return (0);
}
}
