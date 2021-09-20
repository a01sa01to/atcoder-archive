/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26008504
 * Submitted at: 2021-09-20 16:19:03
 * Problem URL: https://atcoder.jp/contests/abs/tasks/arc089_a
 * Result: AC
 * Execution Time: 59 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  int prevt = 0;
  P now = { 0, 0 };
  rep(i, n) {
    int t, x, y;
    cin >> t >> x >> y;
    int dist = abs(x - now.first) + abs(y - now.second);
    if ((prevt + dist > t) || ((t - (prevt + dist)) % 2 == 1)) {
      cout << "No" << endl;
      return 0;
    }
    now = { x, y };
    prevt = t;
  }
  cout << "Yes" << endl;
  return 0;
}