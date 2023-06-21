# include "main.h"
# include <stdio.h>
void print_times_table(int n)
{
int x, l=0, y;
int k = 0, z;
for (x=n;x <= n;x++)
{
k = 0;
for(y=n;y <= n;y++)
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
