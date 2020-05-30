#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  int h1, h2, m1, m2, k;
  scanf("%d%d%d%d%d", &h1, &m1, &h2, &m2, &k);
  int result = (h2*60+m2)-(h1*60+m1) - k; 


  printf("%d\n", result);
  return 0;
}