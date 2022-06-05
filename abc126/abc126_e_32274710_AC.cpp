/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc126/submissions/32274710
 * Submitted at: 2022-06-06 00:14:31
 * Problem URL: https://atcoder.jp/contests/abc126/tasks/abc126_e
 * Result: AC
 * Execution Time: 69 ms
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
  int n, m;
  cin >> n >> m;
  dsu d(n);
  while (m--) {
    int x, y, z;
    cin >> x >> y >> z;
    d.merge(--x, --y);
  }
  cout << d.groups().size() << endl;
  return 0;
}