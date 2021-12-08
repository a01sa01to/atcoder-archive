/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/27763256
 * Submitted at: 2021-12-08 15:50:49
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_d
 * Result: WA
 * Execution Time: 60 ms
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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    --a[i];
  }
  vector<ll> cnt(n, -1);
  cnt[0] = 0;
  ll v = 0;
  // puts("checkpoint1");
  while (true) {
    if (cnt[a[v]] != -1) break;
    cnt[a[v]] = cnt[v] + 1;
    v = a[v];
  }
  // puts("checkpoint2");
  ll cycle = cnt[v] - cnt[a[v]] + 1;
  // cout << "[DEB] " << v << " " << a[v] << " | " << cycle << endl;
  ll nn = cnt[a[v]];
  // cout << "[DEB1] " << nn << endl;

  // puts("checkpoint3");
  ll vv = 0;
  rep(i, nn) {
    vv = a[vv];
    --k;
  }
  k %= cycle;
  rep(i, k) {
    vv = a[vv];
  }
  cout << vv + 1 << endl;
  return 0;
}