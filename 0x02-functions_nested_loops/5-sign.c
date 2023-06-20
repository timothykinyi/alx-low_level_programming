# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n);
int main(void)
{
int n=2;
print_sign(n);
if (n>0)
{
return (1);
}
else if (n==0)
{
return (0);
}
else if (n<0)
{
return (-1);
}
}

int print_sign(int n)
{
if (n>0)
{
printf("+");
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
}
