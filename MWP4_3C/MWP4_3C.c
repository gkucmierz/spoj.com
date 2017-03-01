//
// MWP4_3C

#include <stdio.h>

int main(){
  int z, i, pt, lpt, sum, tmp;
  char str[10002];
  int min = 65; // 0
  int max = 90; // 25

  //printf("%d %d \n", 'A', 'Z');

  scanf("%d", &z);

  while( z-- ){
    scanf("%s", str);
    i = 0;
    pt = 0;
    lpt = 0;
    sum = 0;
    do{
      pt = str[i] - min;
      tmp = pt - lpt;
      if( tmp < 0 ){
        tmp += 26;
      }
      if( tmp > 13 ){
        tmp = 26 - tmp;
      }
      sum += tmp;
      lpt = pt;
      //printf("%d ", str[i] - min);
      ++i;
    }while( str[i] );

    printf("%d\n", sum);
  }

  return 0;
}