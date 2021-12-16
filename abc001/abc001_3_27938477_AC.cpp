/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc001/submissions/27938477
 * Submitted at: 2021-12-16 19:04:53
 * Problem URL: https://atcoder.jp/contests/abc001/tasks/abc001_3
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int deg, dis;
  cin >> deg >> dis;
  if (dis < 15) {
    printf("C 0\n");
    return 0;
  }
  {
    if (deg<=112)printf("N");
    else if(deg<=337)printf("NNE");
    else if(deg<=562)printf("NE");
    else if(deg<=787)printf("ENE");
    else if(deg<=1012)printf("E");
    else if(deg<=1237)printf("ESE");
    else if(deg<=1462)printf("SE");
    else if(deg<=1687)printf("SSE");
    else if(deg<=1912)printf("S");
    else if(deg<=2137)printf("SSW");
    else if(deg<=2362)printf("SW");
    else if(deg<=2587)printf("WSW");
    else if(deg<=2812)printf("W");
    else if(deg<=3037)printf("WNW");
    else if(deg<=3262)printf("NW");
    else if(deg<=3487)printf("NNW");
    else printf("N");
  }
  printf(" ");
  {
    if(dis<93)printf("1");
    else if(dis<201)printf("2");
    else if(dis<327)printf("3");
    else if(dis<477)printf("4");
    else if(dis<645)printf("5");
    else if(dis<831)printf("6");
    else if(dis<1029)printf("7");
    else if(dis<1245)printf("8");
    else if(dis<1467)printf("9");
    else if(dis<1707)printf("10");
    else if(dis<1959)printf("11");
    else printf("12");
  }
  printf("\n");
  return 0;
}