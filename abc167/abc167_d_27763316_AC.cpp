/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/27763316
 * Submitted at: 2021-12-08 15:55:33
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_d
 * Result: AC
 * Execution Time: 61 ms
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
  ll v = 0, counter = 0;
  vector<ll> use, cnt(n, -1);
  vector<bool> visited(n, false);
  while (!visited[v]) {
    visited[v] = true;
    cnt[v] = counter;
    use.push_back(v);
    v = a[v];
    ++counter;
  }
  ll cycle = counter - cnt[v];
  if (k < use.size()) {
    cout << use[k] + 1 << endl;
  }
  else {
    k -= cnt[v];
    k %= cycle;
    cout << use[k + cnt[v]] + 1 << endl;
  }
  return 0;
}