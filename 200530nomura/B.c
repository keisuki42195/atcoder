#include <stdio.h>
#include <string.h>

int main()
{
  char s[200001];
  int h1, h2, m1, m2, k;
  scanf("%s", s);
  int max = strlen(s);
  for (int i = 0; i < max; i++){
    if(s[i] == '?') s[i] = 'D';
  }
  printf("%s\n", s);
  return 0;
}