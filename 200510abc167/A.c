#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  char n[16], m[16];
  scanf("%s", n);
  scanf("%s", m);

  for(int i = 0; i < strlen(n); i++){
    if(n[i] != m[i]){
      printf("No\n");
      return 0;
    }
  }
  if(strlen(n) + 1 == strlen(m)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}