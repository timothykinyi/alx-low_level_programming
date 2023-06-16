# include <stdio.h>

int main(void)
{
for (char character = "a" ; character <= "z" ; character++)
{
if((character != "q") || (character != "e"))
{
putchar(character);
}
}
putchar("\n");
return (0);
}
