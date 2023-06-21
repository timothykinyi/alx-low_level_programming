# include "main.h"
# include <stdio.h>
void times_table(void)
{
int x, l=0, y;
int z;
for (x=0;x < 10;x++)
{
for(y=0;y < 10;y++)
{
z = (x*y);
printf("%d", z);
if (y != 9)
{
if ((l == 1) || (l == 0))
{
printf(",");
printf("  ");
}
}
else
{
printf("\n");
}
}
 l++;
}
}
