# include <stdio.h>
# include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (((x % 3) == 0) && ((x % 5) == 0))
{
printf("FizzBuzz ");
}
else if ((x % 5) == 0)
{
printf("Buzz ");
}
else if ((x % 3) == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", x);
}
}
printf("\n");
return 0;
}
