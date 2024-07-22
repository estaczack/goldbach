#include "mdc.h"

int
MMC (int a, int b)
{
  int mdc = MDC (a, b);
  return ((a * b) / mdc);
}
