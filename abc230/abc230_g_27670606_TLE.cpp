/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27670606
 * Submitted at: 2021-12-03 22:34:06
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_g
 * Result: TLE
 * Execution Time: 5540 ms
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
vector<vector<int>> minDiv;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  minDiv.assign(n, vector<int>(0));
  minDiv[0].push_back(1);
  for (int i = 2; i <= n; ++i) {
    if (minDiv[i - 1].size() == 0) {
      for (int j = i; j <= n; j += i) {
        minDiv[j - 1].push_back(i);
      }
    }
  }
  int ans = 0;
  set<P> used;
  for (int i = 2; i <= n; ++i) {
    for (int j = 0; j < minDiv[i - 1].size(); ++j) {
      for (int k = i; k <= n; k += minDiv[i - 1][j]) {
        if (gcd(p[i - 1], p[k - 1]) != 1 && used.count(P(i, k)) == 0) {
          // printf("[DEB] %d %d | %d %d\n", i, k, p[i - 1], p[k - 1]);
          used.insert(P(i, k));
          ++ans;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}