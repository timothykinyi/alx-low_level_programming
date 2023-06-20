# include "main.h"

void jack_bauer(void)
{
int h=00, m=00;
while(h<24)
{
if(m==60)
{
h++;
m=0;
}
_putchar(h);
_putchar(':');
_putchar(m);
_putchar('\n');
}
return (0);
}
