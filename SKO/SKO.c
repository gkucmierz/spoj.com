//
// SKO

#include <stdio.h>

int main(){
  int t, n, i;
  int degrees[7], deg;

  scanf("%d", &t);

  while( t-- ){
    scanf("%d", &n);

    for( i = 1; i <= 6; ++i ){
      degrees[i] = 0;
    }

    while( n-- ){
      scanf("%d", &deg);
      ++degrees[deg];
    }

    if( degrees[4] + degrees[5] + degrees[6] == 0 ){
      printf("NO\n");
      continue;
    }

    for( i = 1; i <= 6; ++i ){
      printf("%d: %d\n", i, degrees[i]);
    }
    printf("\n");
  }
  

  return 0;
}