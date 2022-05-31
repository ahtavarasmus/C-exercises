#include <stdio.h>
#include "kolmijako.h"

int pienempi_int(const void *a, const void *b)
{
  const int *x = a;
  const int *y = b;
  return (*x < *y);
}

int pienempi_dbl(const void *a, const void *b)
{
  const double *x = a;
  const double *y = b;
  return (*x < *y);
}

int main(void)
{
  int it[7] = {1, 7, 4, 5, 2, 8, 9};
  double dt[12] = {0.4, 0.9, 1.2, 0.6, 0.3, 0.8, 0.1, 0.7, 0.2, 1.1, 0.3, 0.8};
  size_t x = 0;
  size_t y = 0;
  kolmijako_gen(it, 7, sizeof(int), 4, 1, pienempi_int, &x, &y);
  printf("x: %lu y: %lu\n", (unsigned long) x, (unsigned long) y);
  kolmijako_gen(dt, 12, sizeof(double), 11, 0, pienempi_dbl, &x, &y);
  printf("x: %lu y: %lu\n", (unsigned long) x, (unsigned long) y);
  return 0;
}
