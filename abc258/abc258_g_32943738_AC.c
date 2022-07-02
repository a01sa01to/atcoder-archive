/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32943738
 * Submitted at: 2022-07-03 01:53:12
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_g
 * Result: AC
 * Execution Time: 2980 ms
 */

#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

int a[3001][3001];
int main() {
  int n;scanf("%d",&n);
  rep(i, n){
    char c[n]; scanf("%s",c);
    rep(j, n) a[i][j] = c[j] - '0';
  }
  long ans = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        ans += (a[i][j] & a[i][k] & a[j][k]);
      }
    }
  }
  printf("%ld\n",ans);
  return 0;
}