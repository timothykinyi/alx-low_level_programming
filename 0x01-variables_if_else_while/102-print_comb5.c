# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number1, number2;
for (number1 = 0; number1 <= 99; number1++)
{
for (number2 = (number1 == 0) ? 1 : number1; number2 <= 99; number2++)
{
int tens1 = number1 / 10;
int ones1 = number1 % 10;
int tens2 = number2 / 10;
int ones2 = number2 % 10;
if ((tens1 && ones1) != (tens2 || ones2))
{
putchar('0' + tens1);
putchar('0' + ones1);
putchar(' ');
putchar('0' + tens2);
putchar('0' + ones2);
if (number1 != 99 || number2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
