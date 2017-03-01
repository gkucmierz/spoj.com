//
// PZPI5

#include <stdio.h>


int main(){
  int t;
  int n, r;
  int x, y;
  int r2;

  scanf("%d", &t);

  while (t--) {
    scanf("%d%d", &n, &r);

    r2 = r*r;

    while (n--) {
      scanf("%d%d", &x, &y);

      if (x*x+y*y>r2) {
        printf("out\n");
      }else{
        printf("in\n");
      }

    }
  }

  return 0;
}
