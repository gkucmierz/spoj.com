//
// BAJTIOS1

#include <stdio.h>

int main(){
  int n, m, q;
  float p, pm;
  int res[100002] = {0};
  char str[1002];
  int i, j, tmp, cnt = 0;
  int a, b;

  scanf("%d%d%f", &n, &m, &p);
  pm = p * m;

  for( j = 1; j <= n; ++j ){
    scanf("%s", str);

    i = m;
    tmp = -m * '0';
    while( i-- ){
      tmp += str[i];
    }

    if( tmp > pm ){
      ++cnt;
    }

    res[j] = cnt;
    //printf("%d\n", cnt);
  }
  //printf("\n");

  scanf("%d", &q);

  while( q-- ){
    scanf("%d%d", &a, &b);
    printf("%d\n", res[b] - res[a-1]);
  }


  return 0;
}