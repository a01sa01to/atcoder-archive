/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/32646414
 * Submitted at: 2022-06-22 00:11:29
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_e
 * Result: AC
 * Execution Time: 73 ms
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
typedef modint1000000007 mint;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, int> mp;
  rep(i, n) {
    int t = a[i];
    for (int x = 2; x * x <= t; x++) {
      if (t % x != 0) continue;
      int ex = 0;
      while (t % x == 0) {
        t /= x;
        ex++;
      }
      if (!mp.count(x) || mp[x] < ex) mp[x] = ex;
    }
    if (t > 1) mp[t] = max(mp[t], 1);
  }
  Debug(mp);
  mint p = 1;
  for (auto [k, v] : mp) {
    p *= mint(k).pow(v);
  }
  mint ans = 0;
  rep(i, n) {
    int t = a[i];
    mint tmp = 1;
    for (int x = 2; x * x <= t; x++) {
      int ex = 0;
      while (t % x == 0) {
        t /= x;
        ex++;
      }
      if (ex > 0) {
        tmp *= mint(x).pow(ex);
      }
    }
    if (t > 1) {
      tmp *= mint(t);
    }
    Debug(p.val(), tmp.val());
    ans += p / tmp;
  }
  cout << ans.val() << endl;
  return 0;
}