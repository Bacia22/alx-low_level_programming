#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - excites a function given as a pointer
* @array: array to interate over
* @size: size of the array
* @action: pointer to function used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
