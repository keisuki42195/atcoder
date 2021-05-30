#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
  int n;
  scanf("%d",&n);
  long i, j=0, x[n], y[n];
  for(i = 0; i < n; i++){
    scanf("%ld%ld", &x[i], &y[i]);
  }

  long int a, b, max = 0, next_max = 0;
  for(i = 0; i < n; i++){
    for(j = i+1; j < n; j++){
      if(x[i]-x[j] < 0){
        a = -1 * (x[i]-x[j]);
      }else{
        a = x[i]-x[j];
      }
      if(y[i]-y[j] < 0){
        b = -1 * (y[i]-y[j]);
      }else{
        b = y[i]-y[j];
      }
      if(a < b) a = b;
      if(max < a){
        next_max = max;
        max = a;
      }else if(next_max < a){
        next_max = a;
      }
    }
  }
  printf("%ld\n", next_max);
  return 0;
}