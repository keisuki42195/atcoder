// gcc -o 出力ファイル名 このファイル名.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if(n%10 == 3){
    printf("bon\n");
  }else if(n%10 == 0 || n%10 == 1 || n%10 == 6 || n%10 == 8){
    printf("pon\n");
  }else{
    printf("hon\n");
  }

  // printf("Hello World!\n");
  return 0;
}