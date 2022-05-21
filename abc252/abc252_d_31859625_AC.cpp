/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/31859625
 * Submitted at: 2022-05-21 21:43:42
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_d
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

ll Combi(ll n) {
  return n * (n - 1) * (n - 2) / 6;
}
ll Combi2(ll n) {
  return n * (n - 1) / 2;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> cnt(2e5 + 1, 0);
  rep(i, n) cnt[a[i]]++;

  ll ans = Combi(n);
  rep(i, 2e5 + 1) {
    if (cnt[i] >= 2) {
      ans -= Combi2(cnt[i]) * (n - cnt[i]);
    }
    if (cnt[i] >= 3) {
      ans -= Combi(cnt[i]);
    }
  }
  cout << ans << endl;
  return 0;
}