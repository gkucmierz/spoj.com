//
// TAXIMAN3

#include <stdio.h>
#include <math.h>

int main(){
  int k, n;
  int p0[1001], p1[1001];
  int i;
  long long int sum;

  scanf("%d%d", &k, &n);

  while( n-- ){
    for( i = 0; i < k; ++i ){
      scanf("%d", &p0[i]);
    }
    for( i = 0; i < k; ++i ){
      scanf("%d", &p1[i]);
    }
    sum = 0;
    for( i = 0; i < k; ++i ){
      sum += abs(p0[i] - p1[i]);
    }
    printf("%lld\n", sum);
  }

  return 0;
}