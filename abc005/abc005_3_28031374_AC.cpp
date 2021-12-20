/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc005/submissions/28031374
 * Submitted at: 2021-12-20 17:09:27
 * Problem URL: https://atcoder.jp/contests/abc005/tasks/abc005_3
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int t, n;
  cin >> t >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int m;
  cin >> m;
  vector<int> b(m);
  rep(i, m) cin >> b[i];
  rep(i, m) {
    bool chk = true;
    rep(j, n) {
      if (a[j] <= b[i] && b[i] <= a[j] + t) {
        a[j] = -1000;
        chk = false;
        break;
      }
    }
    if (chk) {
      puts("no");
      return 0;
    }
  }
  puts("yes");
  return 0;
}