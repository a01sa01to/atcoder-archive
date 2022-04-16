/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc248/submissions/31019340
 * Submitted at: 2022-04-16 21:18:40
 * Problem URL: https://atcoder.jp/contests/abc248/tasks/abc248_d
 * Result: AC
 * Execution Time: 758 ms
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
    auto litr = lower_bound(t[x].begin(), t[x].end(), l - 1);
    auto ritr = upper_bound(t[x].begin(), t[x].end(), r - 1);
    cout << ritr - litr << endl;
  }
  return 0;
}