#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints if the number is posetive,negative or 0
 *Return: ALways 0
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand () - RAND_MAX / 2;

  if (n > 0)
    {
      printf("%d is positive\n", n);
    }
  else if (n == 0)
    {
      printf("%d is zero\n", n);
    }
  else
    {
      printf("% is negative\n", n);
    }
  return (0);
}
