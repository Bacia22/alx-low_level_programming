#include <stdio.h>

/**
* main - prints all combination of single digits
* Return: Always 0
*/
int main(void)
{
int n;
int m;
for (n = 0; n <= 9; n++)
for (m = n + 1; m <= 9; m++)
putchar(n + '0');
putchar(m + '0');
if (n < 8)
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
