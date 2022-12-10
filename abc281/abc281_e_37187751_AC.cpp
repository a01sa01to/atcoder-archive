/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37187751
 * Submitted at: 2022-12-10 23:20:14
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_e
 * Result: AC
 * Execution Time: 647 ms
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

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  map<ll, ll> mp, mpinv;
  {  // Compress
    set<ll> st;
    rep(i, n) st.insert(a[i]);
    ll cnt = 0;
    for (auto x : st) {
      mp[x] = cnt;
      mpinv[cnt] = x;
      cnt++;
    }
  }
  // fw1 = 個数管理, fw2 = 総和管理
  fenwick_tree<ll> fw1(n), fw2(n);
  rep(i, m) {
    fw1.add(mp[a[i]], 1);
    fw2.add(mp[a[i]], a[i]);
  }
  rep(i, n - m + 1) {
    int ok = 0, ng = n;
    while (ng - ok > 1) {
      int mid = (ok + ng) / 2;
      ll cnt = fw1.sum(0, mid);
      (cnt <= k ? ok : ng) = mid;
    }
    ll ans = fw2.sum(0, ok);
    ans += (k - fw1.sum(0, ok)) * mpinv[ok];
    cout << ans << " ";
    if (i + m == n) break;
    fw1.add(mp[a[i]], -1);
    fw2.add(mp[a[i]], -a[i]);
    fw1.add(mp[a[i + m]], 1);
    fw2.add(mp[a[i + m]], a[i + m]);
  }
  cout << endl;
  return 0;
}