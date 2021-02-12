#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
  #pragma omp parallel
  {
    #pragma omp for
    for (int i = 0; i < 5; i++)
    {
      printf("%d\n", fibonacci(40));
    }
  }
}

