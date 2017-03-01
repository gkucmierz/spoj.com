//
// MWP3_3C

#include <stdio.h>

int main(){
  int z, n, d, cnt;

  scanf("%d", &z);

  while( z-- ){
    scanf("%d", &n);
    cnt = 0;
    while( n-- ){
      scanf("%d", &d);
      if( d > 1 ){
        ++cnt;
      }
    }
    
    if( cnt &= 1 ){
      printf("1\n");
    }else{
      printf("2\n");
    }
  }


  return 0;
}