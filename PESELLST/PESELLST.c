//
// PESELLST

#include <stdio.h>


int main(){
  char tkpk[4];
  int n;
  char pesel[12];
  int weights[11] = {1,3,7,9,1,3,7,9,1,3,1};
  int un, sum, i;
  int cond;
  int res = 0;
  int d, m, y, w;
  int year_corr[5] = {1900, 2000, 2100, 2200, 1800};

  scanf("%s %d", tkpk, &n);

  while( n-- ){
    scanf("%s", pesel);

    // repair pesel number
    for( i = 0, un = -1, sum = 0; i < 11; ++i ){
      if( pesel[i] == '?' ){
        un = i;
        pesel[i] = '-';
      }else{
        sum += weights[i] * (pesel[i]-'0');
      }
    }
    i = 10 - (sum / weights[un]) % 10;
    if( i == 10 ){
      i = 0;
    }
    pesel[un] = i + '0';

    // check tkpk conditions
    cond = 0;

    //tkpk[0] = '1';
    if( tkpk[0] == '0' ){
      ++cond;
    }else{
      cond += (pesel[9] + tkpk[0]) & 1 ? 0 : 1;
    }

    if( tkpk[1] == '0' ){
      ++cond;
    }else{
      w = tkpk[1]-'0';
      if( w == 7 ){
        w = 0;
      }
      m = (pesel[2]-'0')*10 + pesel[3]-'0';
      y = year_corr[m/20] + (pesel[0]-'0')*10 + pesel[1]-'0';
      m %= 20;
      d = (pesel[4]-'0')*10 + pesel[5]-'0';
      //printf("%s %d %d %d", pesel, y, m, d);
      cond += w == ((d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7) ? 1 : 0;
      //printf(" %d\n", cond);
    }

    if( tkpk[2] == '0' ){
      ++cond;
    }else{
      //cond += pesel[9] + tkpk[0]) & 1 ? 0 : 1;
    }

    if( cond == 3 ){
      ++res;
    }
    //printf("%s\n", pesel);
  }

  printf("%d", res);

  return 0;
}


// 11:
// =MOD(10-MOD(1*A1+3*B1+7*C1+9*D1+E1+3*F1+7*G1+9*H1+I1+3*J1;10);10)
// 
// =1*A1+3*B1+7*C1+9*D1+E1+3*F1+7*G1+9*H1+I1+3*J1+K1
