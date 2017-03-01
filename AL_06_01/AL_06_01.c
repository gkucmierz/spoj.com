//
// AL_06_01

#include <stdio.h>

int main(){
  int n;
  int a, b, res;

  scanf("%d", &n);

  while (n--) {
    scanf("%d%d", &a, &b);
    res = a % b;

    if (res<0) {
      res += b > 0 ? b : -b;
    }

    printf("%d\n", res);
  }

  return 0;
}
