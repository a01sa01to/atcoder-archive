/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/33219182
 * Submitted at: 2022-07-14 18:39:58
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: AC
 * Execution Time: 237 ms
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
  int q;
  cin >> q;
  multiset<int> s;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      s.insert(x);
    }
    else if (t == 2) {
      int x, c;
      cin >> x >> c;
      while (c--) {
        auto it = s.find(x);
        if (it != s.end()) s.erase(it);
        else
          break;
      }
    }
    else {
      cout << *s.rbegin() - *s.begin() << endl;
    }
  }
  return 0;
}