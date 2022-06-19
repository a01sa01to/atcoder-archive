/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc142/submissions/32602885
 * Submitted at: 2022-06-19 22:08:19
 * Problem URL: https://atcoder.jp/contests/arc142/tasks/arc142_b
 * Result: WA
 * Execution Time: 33 ms
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
  vector ans(n, vector<int>(n, 0));
  rep(i, n) {
    rep(j, n) {
      // 1 2 5
      // 3 4 6
      // 7 8 9
      int x;
      if (j > i)
        x = j * j + (i + 1);
      else
        x = (i + 1) * (i + 1) - (i - j);

      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}