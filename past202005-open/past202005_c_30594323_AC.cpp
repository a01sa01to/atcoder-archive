/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/30594323
 * Submitted at: 2022-04-01 00:03:40
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll a, r, n;
  cin >> a >> r >> n;
  const ll INF = 1e9;
  if (r > 1 && n >= 31) {
    cout << "large" << endl;
  }
  else if (r == 1) {
    cout << a << endl;
  }
  else {
    ll ans = a;
    rep(_, n - 1) ans *= r;
    if (ans > INF)
      cout << "large" << endl;
    else
      cout << ans << endl;
  }
  return 0;
}