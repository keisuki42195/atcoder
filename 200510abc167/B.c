#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  int a, b, c, k;
  scanf("%d%d%d%d", &a, &b, &c, &k);

  if(k <= a){
    printf("%d\n", k);
  }else if(k <= a+b){
    printf("%d\n", a);
  }else{
    printf("%d\n", 2*a+b-k);
  }
  return 0;
}