# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c);
int main(void)
{
int c= 'o';
int k=_isalpha(c);
if (k==1)
{
return (1);
}else if (k==0)
{
return (0);
}
}


int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}else
{
return (0);
}

}
