#include <stdio.h>

/**
* main - prints all possible combinations of three digits
* Return: Always 0
*/
int main(void)
{
int one = '0';
int tens = '0';
int hundreds = '0';
for (hundreds = '0'; hundreds <= '9'; hundreds++)
{
for (tens = '0'; tens <= '9'; tens++)
{
for (one = '0'; one <= '9'; one++)
if (!((ones == tens) || (tens == hundreds) || (tens > ones) || (hundreds > tens)))
{
putchar(hundreds);
putchar(tens);
putchar(ones);
if (!(ones == '9' && hundreds == '7' && tens == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return(0);
}
