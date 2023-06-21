#include <stdio.h>

int main()
{
int n = 50;
unsigned long int fib[n];
fib[0] = 1; 
fib[1] = 2;
for (int i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (int i = 0; i < n; i++)
{
printf("%llu", fib[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
return 0;
}
