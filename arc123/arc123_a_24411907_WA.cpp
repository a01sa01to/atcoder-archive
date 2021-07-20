/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc123/submissions/24411907
 * Submitted at: 2021-07-20 22:52:27
 * Problem URL: https://atcoder.jp/contests/arc123/tasks/arc123_a
 * Result: WA
 * Execution Time: 9 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  // a2 - a1 = a3 - a2
  // 2 a2 - a1 - a3 = 0
  ll a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  ll ans = 0;
  ll d = 2 * a2 - a1 - a3;
  if (d > 0) {
    ans += d;
  }
  else if (d < 0 && d % 2 == 0) {
    ans += (-d) / 2;
  }
  else if (d < 0) {
    ans += (-d) / 2 + 1;
  }
  cout << ans << endl;
  return 0;
}