#include "main.h"
/**
* _memset - filla block of memory with a specific value
* @s: memory area to return
* @b: constant byte
* @n: sise of byte
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i += 1;
}
return (s);
}
