/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28151989
 * Submitted at: 2021-12-25 23:35:45
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_c
 * Result: AC
 * Execution Time: 24 ms
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

ll ans = 0, x;

void dfs(ll idx, vector<vector<ll>>& a, ll cnt) {
  if (cnt > 1e18 || cnt < 0) return;
  if (idx == a.size()) {
    if (x == cnt) ++ans;
    return;
  }
  rep(i, a[idx].size()) dfs(idx + 1, a, cnt * a[idx][i]);
}

int main() {
  ll n;
  cin >> n >> x;
  vector<vector<ll>> a(n);
  rep(i, n) {
    int l;
    cin >> l;
    a[i].resize(l);
    rep(j, l) cin >> a[i][j];
  }
  dfs(0, a, 1);
  cout << ans << endl;
  return 0;
}