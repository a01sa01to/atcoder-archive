/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/27918928
 * Submitted at: 2021-12-15 11:14:38
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_c
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

ll f(ll a, ll b) { return max(to_string(a).size(), to_string(b).size()); }

int main() {
  ll n;
  cin >> n;
  vector<ll> div;
  div.push_back(1);
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      div.push_back(i);
    }
  }
  sort(div.begin(), div.end());
  ll ans = 1e9;
  for (ll i = 0; i < div.size(); ++i) ans = min(ans, f(div[i], n / div[i]));
  cout << ans << endl;
  return 0;
}