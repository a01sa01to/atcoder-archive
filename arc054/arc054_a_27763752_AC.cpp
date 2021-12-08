/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc054/submissions/27763752
 * Submitted at: 2021-12-08 16:25:57
 * Problem URL: https://atcoder.jp/contests/arc054/tasks/arc054_a
 * Result: AC
 * Execution Time: 6 ms
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
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  int l, x, y, s, d;
  cin >> l >> x >> y >> s >> d;
  // 時計回り -> 速さx+yでsからdへ(d<sならd+=l) -> 歩く距離はd-s (or +l)
  // 反時計回り -> 速さy-xでsからdへ(s<dならs+=l) -> 歩く距離はs-d (or +l)
  ld clockwise = d - s;
  if (clockwise < 0) clockwise += l;
  clockwise /= x + y;
  ld counterclockwise = s - d;
  if (counterclockwise < 0) counterclockwise += l;
  counterclockwise /= y - x;
  if (counterclockwise < 0) counterclockwise = 1e9;
  cout << fixed << setprecision(15) << min(clockwise, counterclockwise) << endl;
  return 0;
}