#include "main.h"
/**
* _sqrt_recursion - return the natural square root of a number
* @n: number for which natural square root should be found
*
* Return: natural square root n
*/
int _sqrt_recursion(int n)
{
return (1, n);
}
/**
* square - find square root
* @n: int to find square root
* @val: square root
* Return: int
*/
int square(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (square(n, val + 1));
else
return (-1);
}
