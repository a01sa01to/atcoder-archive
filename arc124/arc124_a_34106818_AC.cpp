/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc124/submissions/34106818
 * Submitted at: 2022-08-17 18:18:35
 * Problem URL: https://atcoder.jp/contests/arc124/tasks/arc124_a
 * Result: AC
 * Execution Time: 8 ms
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
using mint = modint998244353;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> t(n, 0);
  vector<bool> decided(n, false);
  rep(_, k) {
    char c;
    int pos;
    cin >> c >> pos;
    --pos;
    decided[pos] = true;
    if (c == 'L') {
      for (int i = pos; i < n; i++) t[i]++;
    }
    else {
      for (int i = 0; i < pos + 1; i++) t[i]++;
    }
  }
  mint ans = 1;
  rep(i, n) {
    if (decided[i] || t[i] == 0) continue;
    ans *= t[i];
  }
  cout << ans.val() << endl;
  return 0;
}