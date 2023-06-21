# include "main.h"
# include <stdio.h>
void times_table(void)
{
int x, l=0, y;
int k = 0, z;
for (x=0;x < 10;x++)
{
for(y=0;y < 10;y++)
{
z = (x*y);
k = o;
printf("%d", z);
if (y != 9)
{
if ((l == 1) || (l == 0))
{
printf(",");
printf("  ");
}
else if (l == 2)
{
if(k < 4)
{
printf(",");
printf("  ");
}
else
{
printf(",");
printf(" ");
}
k++;
}
else if (l == 3)
{
if(k < 3)
{
printf(",");
printf("  ");
}
else
{
printf(",");
printf(" ");
}
k++;
}
else if (l == 4)
{
if(k < 2)
{
printf(",");
printf("  ");
}
else
{
printf(",");
printf(" ");
}
k++;
}
else if (l >= 5)
{
if(k < 1)
{
printf(",");
printf("  ");
}
else
{
printf(",");
printf(" ");
}
k++;
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
