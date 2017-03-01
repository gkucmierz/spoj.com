
#include <stdio.h>
#include <math.h>


int main(){
  int d;
  int x0, y0, r0, x1, y1, r1, r, dist2;
  double dist, res;

  scanf("%d", &d);

  while( d-- ){
    scanf("%d%d%d%d%d%d", &x0, &y0, &r0, &x1, &y1, &r1);

    dist2 = (x0-x1)*(x0-x1) + (y0-y1)*(y0-y1);
    dist = pow(dist2, .5);

    r = r0 > r1 ? r1 : r0;

    res = r0 + r1 - dist;
    if( res < 0 ){
      res = 0;
    }
    if( res > 2 * r ){
      res = 2 * r;
    }

    //printf("%.2f\t%.2f\t%d\n", res, dist, r0+r1);
    printf("%.2f\n", res);
  }

  return 0;
}

// d > r0+r1
// d = r0+r1

// d < r0+r1