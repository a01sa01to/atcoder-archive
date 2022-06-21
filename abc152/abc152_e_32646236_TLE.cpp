/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/32646236
 * Submitted at: 2022-06-22 00:00:27
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_e
 * Result: TLE
 * Execution Time: 2205 ms
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
  mint ans = 0;
  rep(i, n) {
    map<int, int> mp2 = mp;
    int t = a[i];
    for (int x = 2; x * x <= t; x++) {
      while (t % x == 0) {
        t /= x;
        mp2[x]--;
      }
    }
    if (t > 1) mp2[t]--;
    Debug(mp2);
    mint tmp = 1;
    for (auto p : mp2) {
      tmp *= mint(p.first).pow(p.second);
    }
    ans += tmp;
  }
  cout << ans.val() << endl;
  return 0;
}