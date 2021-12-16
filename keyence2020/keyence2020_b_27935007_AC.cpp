/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2020/submissions/27935007
 * Submitted at: 2021-12-16 14:22:12
 * Problem URL: https://atcoder.jp/contests/keyence2020/tasks/keyence2020_b
 * Result: AC
 * Execution Time: 74 ms
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
  int n;
  cin >> n;
  vector<P> r(n);
  rep(i, n) {
    ll x, y;
    cin >> x >> y;
    r[i] = P(x - y, x + y);
  }
  ll ans = 0;
  sort(r.begin(), r.end(), [](P& a, P& b) {
    return a.second < b.second;
  });
  ll prev = -1e10;
  for (P x : r) {
    if (prev <= x.first) {
      ++ans;
      prev = x.second;
    }
  }
  cout << ans << endl;
  return 0;
}