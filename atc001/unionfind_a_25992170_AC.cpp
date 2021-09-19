/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc001/submissions/25992170
 * Submitted at: 2021-09-19 23:17:44
 * Problem URL: https://atcoder.jp/contests/atc001/tasks/unionfind_a
 * Result: AC
 * Execution Time: 372 ms
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
  int n, q;
  cin >> n >> q;
  dsu d(n);
  rep(i, q) {
    int p, a, b;
    cin >> p >> a >> b;
    if (p) {
      cout << (d.same(a, b) ? "Yes" : "No") << endl;
    }
    else {
      d.merge(a, b);
    }
  }
  return 0;
}