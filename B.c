#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  int k;
  char str[256];
  scanf("%d", &k);
  scanf("%s", str);
  if(k >=  strlen(str)){
    printf("%s\n", str);
  }else{
    printf("%.*s", k , str);
    printf("...\n");
  }

  // printf("Hello World!\n");
  return 0;
}