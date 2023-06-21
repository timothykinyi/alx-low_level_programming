# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x[50], z = 1, n = 2;
x[0] = 1;
x[1] = 2;
printf("%d, ", x[0]);
printf("%d, ", x[1]);
while(z < 51)
{
x[n] = (x[n-2] + x[n - 1]);
printf("%d, ", x[n]);
n++;
}
return (0);
}
