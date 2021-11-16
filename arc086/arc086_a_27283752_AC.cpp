/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc086/submissions/27283752
 * Submitted at: 2021-11-16 10:35:06
 * Problem URL: https://atcoder.jp/contests/arc086/tasks/arc086_a
 * Result: AC
 * Execution Time: 65 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  int c = 0, prev = a[0];
  rep(i, n) {
    if (prev == a[i]) a[i] = c;
    else {
      c++;
      prev = a[i];
      a[i] = c;
    }
  }
  vector<int> cnt(c + 1, 0);
  rep(i, n) cnt[a[i]]++;
  sort(cnt.begin(), cnt.end());
  int ans = 0;
  rep(i, c - k + 1) ans += cnt[i];
  cout << ans << endl;
  return 0;
}