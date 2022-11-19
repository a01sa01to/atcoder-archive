/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc278/submissions/36646200
 * Submitted at: 2022-11-19 22:57:26
 * Problem URL: https://atcoder.jp/contests/abc278/tasks/abc278_c
 * Result: AC
 * Execution Time: 379 ms
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
  int n, q;
  cin >> n >> q;
  set<pair<int, int>> fs;
  rep(_, q) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) {
      fs.insert({ a, b });
    }
    else if (t == 2) {
      fs.erase({ a, b });
    }
    else {
      bool ok = (fs.count({ a, b }) && fs.count({ b, a }));
      cout << (ok ? "Yes" : "No") << endl;
    }
  }
  return 0;
}