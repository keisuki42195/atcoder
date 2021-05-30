#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

long int check(long *hairetu1, long *hairetu2){
  long int i = 0,j = 0, flag = 0;
  long int tmp, max = 10^15;
  printf("start\n");
  while(i < 10^15){
    if(flag == 0){
      if(hairetu1[i] != 0){
        j = i;
        flag = 1;
      }else if(hairetu2[i] != 0){
        j = i;
        flag = 2;
      }
    }
    if(flag == 2){
      if(hairetu1[i] != 0){
        tmp = i - j;
        if(tmp < max){
          max = tmp;
        }
        j = i;
        flag = 1;
      }
    }else if(flag == 1){
      if(hairetu2[i] != 0){
        tmp = i - j;
        if(tmp < max){
          max = tmp;
        }
        j = i;
        flag = 2;
      }
    }
    i++;
    if(i % 10^14 == 0){
      printf("%ld\n", i);
    }
  }
  printf("end\n");
  return max;
}

int main(){
    int n, nn;
    scanf("%d",&n);
    nn = 2*n;
    long i, j=0, x, r = 0, g=0, b=0, rhairetu[10^15] = {}, ghairetu[10^15] = {}, bhairetu[10^15] = {};
    char y;
    for(i = 0; i < nn; i++){
      scanf("%ld %s", &x, &y);
      if(y == 'R'){
        r++;
        rhairetu[x] == 1;
      }else if(y == 'G'){
        g++;
        ghairetu[x] == 1;
      }else if(y == 'B'){
        b++;
        bhairetu[x] == 1;
      }
    }
    printf("R = %ld, G = %ld, B = %ld\n", r, g, b);

    long int ans;  
    if(r % 2 == 0 && g % 2 == 0 && b % 2 == 0){
      ans = 0;
    }else if(r % 2 == 0){
      printf("r\n");
      ans = check(ghairetu, bhairetu);
    }else if(g % 2 == 0){
      printf("g\n");
      ans = check(rhairetu, bhairetu);
    }else{
      printf("b\n");
      ans = check(ghairetu, rhairetu);
    }
    printf("%ld\n", ans);
    return 0;
}