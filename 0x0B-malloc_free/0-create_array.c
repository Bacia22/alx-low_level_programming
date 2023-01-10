#include "main.h"
#include <stdlib.h>
/**
* *creat_array - crats an array of char, and initializes
* it with a specifi char
* @c: char to initialize
* @size: number of bytes to allocte
*
* Return: a pointer to the aaray or null if it fails
*/
char *creat_array(unsigned int size, char c)
{
char *array = malloc(size);
if (size == 0 || array == 0)
return (NULL);
while (size--)
array[size] = c;
return (array);
}
