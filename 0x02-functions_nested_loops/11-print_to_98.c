# include <stdio.h>
# include "main.h"

void print_to_98(int n)
{
int h;
if (h < 98)
{
for (h = n;h < 99 ;h++)
{
printf("%d", h);
if(h != 98)
{
printf(", ");
}else
{
printf("\n");
}
}
}
else
{
for (h = n;h > 97 ;h--)
{
printf("%d", h);
}
}
}
