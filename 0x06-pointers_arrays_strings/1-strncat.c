#include "main.h"
/**
* *_strncat - concatenates n bytes of two string
* @dest: pointers destination
* @src: pointer of bytes
* @n: number of bytes to receive
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
