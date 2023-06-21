# include "main.h"
# include <stdio.h>
void times_table(void)
{
int x, y;
int z;
for (x=0;x < 10;x++)
{
for(y=0;y < 10;y++)
{
z = (x*y);
printf("%d", z);
if (y != 9)
{
printf(",");
printf(" ");
}
else
{
printf("\n");
}
}
}
}
