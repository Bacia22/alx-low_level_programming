#include "main.h"
#include <stdlib.h>
/**
* create_array - crate an array of char, and initializes
* it with a specifi char
* @size: size to array
* @c: char to assign
*
* Return: a pointer to the aaray or null if it fail
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[1] = c;
return (str);
}
