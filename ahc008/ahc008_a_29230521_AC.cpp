/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc008/submissions/29230521
 * Submitted at: 2022-02-12 12:04:08
 * Problem URL: https://atcoder.jp/contests/ahc008/tasks/ahc008_a
 * Result: AC
 * Execution Time: 61 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
  }
  int m;
  cin >> m;
  rep(i, m) {
    int x, y;
    cin >> x >> y;
  }
  rep(i, 300) {
    rep(j, m) cout << ".";
    cout << endl;
  }
  return 0;
}