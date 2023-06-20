# include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void);
int main(void)
{
int x=0;
while(x<10)
{
print_alphabet_x10();
x++;
}
return (0);
}


void print_alphabet_x10(void)
{
char lower;
for(lower = 'a';lower <= 'z';lower++)
{
putchar(lower);
}
putchar('\n');
}
