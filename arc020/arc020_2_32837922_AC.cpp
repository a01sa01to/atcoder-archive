/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc020/submissions/32837922
 * Submitted at: 2022-06-30 00:05:58
 * Problem URL: https://atcoder.jp/contests/arc020/tasks/arc020_2
 * Result: AC
 * Execution Time: 5 ms
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
  int n, c;
  cin >> n >> c;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int ans = 1e9;
  for (int x = 1; x <= 10; x++) {
    for (int y = 1; y <= 10; y++) {
      if (x == y) continue;
      int tmp = 0;
      rep(i, n) {
        if (i % 2 == 0 && a[i] != x) tmp++;
        if (i % 2 == 1 && a[i] != y) tmp++;
      }
      ans = min(ans, tmp);
    }
  }
  cout << ans * c << endl;
  return 0;
}