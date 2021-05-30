#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int int_sort( const void * a , const void * b ) {
  /* 引数はvoid*型と規定されているのでint型にcastする */
  if( *( int * )a < *( int * )b ) {
    return -1;
  }
  else
  if( *( int * )a == *( int * )b ) {
    return 0;
  }
  return 1;
}

int main()
{
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  int a[n], b[m];
  for (int i = 0; i < m; i++){
    scanf("%d", a[i]);
    scanf("%d", b[i]);
  }
  for (int i = 0; i < m; i++){
    if(a[i] > b[i] ){
      int temp = a[i];
      a[i] = b[i];
      b[i] = temp;
    }
  }

  int c[n];
  for (int i = 0; i < m; i++){
    c[i] = 0;
  }

    for (int i = 0; i < m; i++){
      if(a[i] == 1 && c[j] == 0 ){
        c[b[i]] = 1;
      }
    }
    for(){
      if(c[i] == 1)
    }
  for(int j = 0; j < n; j++){
    
  }

  // printf("%.20lf\n", da);
  scanf("%d", &h);
  scanf("%d", &m);
  double hk = h*30+m*0.5;
  int mk = m*6;
  double rad = (hk - mk)*M_PI/180;
  double da = a*a;
  double db = b*b;
  // printf("%.20lf\n", da);
  // printf("%.20lf\n", da);
  // long long int x = a*a+b*b-2*a*b*cos(rad)*10000000000;
  // double l = sqrt(x)/100000.0;
  double l = sqrt(a*a+b*b-2*a*b*cos(rad));
  printf("%.20lf\n", l);
  // printf("Hello World!\n");
  return 0;
}
// 4.56425719433005567605
// 4.56425719433029364325
// 4.56425719433005561143