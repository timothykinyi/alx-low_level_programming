# include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
int main(void)
{
print_alphabet();

return (0);
}


void print_alphabet(void)
{
char lower;
for(lower = 'a';lower <= 'z';lower++)
{
putchar(lower);
}
putchar('\n');
}
