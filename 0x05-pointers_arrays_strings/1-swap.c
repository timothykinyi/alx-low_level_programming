# include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: first number to be swaped
 * @b: second number to be swaped
 * return : nothing
 */
void swap_int(int *a, int *b)
{
int *s, *w;
*s = *a;
*w = *b;
*a = w;
*b = s;
}
