#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int min1(int a, int b) { return a < b ? a : b; }

int main()
{
  int n;
  scanf("%d", &n);
  int p[n*n];
  int g[n*n];
  for (int i = 0; i < n*n; i++){
    scanf("%d", &p[i]);
    g[i] = 1;
  }

  long kekka = 0;

  for(int i=0; i < n*n; i++){
    if(p[i]-1 < n || p[i]-1 >= n*(n-1)){
      g[p[i]-1] = 0;
    }else if(p[i]-1 % n == 0 || p[i]-1 % n == n-1){
      g[p[i]-1] = 0;
    }else{
      int o=0, s=0, q=0, r=0;
      int sho = (p[i]-1)/n;
      int amari = (p[i]-1)%n;
      for(int ii = 0; ii < sho; ii++){
        o = o+g[ii*n+amari];
      }
      for(int ii = sho+1; ii < n; ii++){
        s = s+g[ii*n+amari];
      }
      for(int ii = 0; ii < amari; ii++){
        q = q+g[sho*n+ii];
      }
      for(int ii = amari+1; ii < n; ii++){
        r = r+g[sho*n+ii];
      }
      o = min1(o, min1(s, min1(q, r)));
      kekka = kekka + o;
      g[p[i]-1] = 0;
    }
  }

  printf("%ld\n", kekka);
  return 0;
}