#include <stdio.h>

/**
* bmain - function executed before main
* Return: no return
*/

void __attribute__ ((constructor)) bmain()
{
	printf("you're beat! and yet, you must allow");
		printf(",\nl bore my house upon my back!\n");
}
