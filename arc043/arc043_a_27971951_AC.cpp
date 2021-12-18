/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc043/submissions/27971951
 * Submitted at: 2021-12-19 00:18:56
 * Problem URL: https://atcoder.jp/contests/arc043/tasks/arc043_a
 * Result: AC
 * Execution Time: 49 ms
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
  ll n, a, b;
  cin >> n >> a >> b;
  vector<ll> s(n);
  rep(i, n) cin >> s[i];
  sort(s.begin(), s.end());
  if (s.back() - s.front() == 0) {
    cout << -1 << endl;
    return 0;
  }
  ld p, q;
  p = ld(b) / ld(s.back() - s.front());
  vector<ld> s_conv(n);
  rep(i, n) s_conv[i] = ld(s[i]) * p;
  ld sum = accumulate(s_conv.begin(), s_conv.end(), 0.0);
  q = ld(a) - (sum / ld(n));
  cout << fixed << setprecision(15) << p << " " << q << endl;
  return 0;
}