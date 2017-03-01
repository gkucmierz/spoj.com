//
// MWP4_2E

char p[25001];

#include <stdio.h>

int main(){
  int z;
  int i, j, k;
  int a, b;

  scanf("%d", &z);

  while( z-- ){
    scanf("%d%d%d", &i, &j, &k);

    while( i-- ){
      p[i] = 0;
    }
    p[k] = 1;

    printf("%d", k);
    while( j-- ){
      scanf("%d%d", &a, &b);
      //printf("%d %d\n", a, b);

      if( p[a] == 1 && p[b] == 0 ){
        p[b] = 1;
        k = b;
        printf(" %d", k);
      }
    }

    printf("\n");

  }
 

  return 0;
}