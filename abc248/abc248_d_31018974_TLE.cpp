/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31018974
 * Submitted at: 2022-04-16 21:17:53
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_d
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

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, vector<int>> t;
  rep(i, n) cin >> a[i];
  rep(i, n) {
    t[a[i]].push_back(i);
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;
    vector<int> tmp = t[x];
    auto litr = lower_bound(tmp.begin(), tmp.end(), l - 1);
    auto ritr = upper_bound(tmp.begin(), tmp.end(), r - 1);
    cout << ritr - litr << endl;
  }
  return 0;
}