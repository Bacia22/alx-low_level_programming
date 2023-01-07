#include <stdio.h>
/**
* main - write a program that prints the number of argumrnts passed into it
*
* @args: this is the argument count
* @argv: this is the argument vector
*
* Return: The return 0
*/

int main(int args, char *argv[])
{
printf("%d\n", args - 1);
(void)argv;
return (0);
}
