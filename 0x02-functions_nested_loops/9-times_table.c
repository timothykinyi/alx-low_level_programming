# include <stdio.h>
# include "main.h"

void times_table(void)
{
int rows = 10;
int cols = 10;
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
printf("%2d, ", i * j);
}
printf("\n");
}
}
