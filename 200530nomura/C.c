#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
  long long n, i;
  scanf("%lld", &n);
  long long a[n];
  long long sum = 0;
  for(i = 0; i <= n; i++){
    scanf("%lld", &a[i]);
    sum = sum + a[i];
  }
  long long int eda = 1, result = 1;
  // int eda = 1, result = 1;
  if(n == 0 && a[0] == 1){
    printf("1\n");
    return 0;
  }

  
  if(a[0] != 0){
    printf("-1\n");
    return 0;
  }else{
    for(i = 1; i <= n; i++){
      if(eda*2 < sum){
        if(eda*2 < a[i]){
          printf("-1\n");
          return 0;
        }
        eda = eda*2 - a[i];
      }else{
        eda = sum - a[i];
      }
      result = result + eda + a[i];
      sum = sum - a[i];
    }
    printf("%lld\n", result);
    return 0;
  }
}