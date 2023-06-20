# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n>0)
{
printf("+\n");
return (1);
}
else if (n==0)
{
printf("0");
return (0);
}
else if (n<0)
{
printf("-");
return (-1);
}
return (0);
}
