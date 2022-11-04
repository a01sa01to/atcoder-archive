/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2018/submissions/36202481
 * Submitted at: 2022-11-05 00:49:57
 * Problem URL: https://atcoder.jp/contests/tenka1-2018/tasks/tenka1_2018_c
 * Result: AC
 * Execution Time: 48 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

inline ll getRes(vector<ll>& d) {
  ll ret = 0;
  rep(i, d.size() - 1) ret += abs(d[i] - d[i + 1]);
  return ret;
}

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  ll ans = 0;
  ll mid = n / 2;
  if (n % 2 == 0) {
    // 大小大小
    vector<ll> b(n);
    rep(i, mid) b[i * 2 + 1] = a[i];
    rep(i, mid) b[i * 2] = a[i + mid];
    ans = max(ans, getRes(b));
  }
  else {
    // 大小大小中
    vector<ll> b(n);
    rep(i, mid) b[i * 2 + 1] = a[i];
    b[n - 1] = a[mid];
    rep(i, mid) b[i * 2] = a[i + mid + 1];

    // 中大小大小
    vector<ll> c(n);
    c[0] = a[mid];
    rep(i, mid) c[i * 2 + 2] = a[i];
    rep(i, mid) c[i * 2 + 1] = a[i + mid + 1];

    ans = max(ans, getRes(b));
    ans = max(ans, getRes(c));
  }
  cout << ans << endl;
  return 0;
}