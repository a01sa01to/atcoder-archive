/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/27763175
 * Submitted at: 2021-12-08 15:44:59
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_d
 * Result: WA
 * Execution Time: 59 ms
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
  rep(i, n) {
    // cout << "[DEB] " << i << " " << a[i] << " " << cnt[i] << " " << cycle << " " << nn << endl;
    if (cnt[i] == nn + ((k - nn) % cycle)) {
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}