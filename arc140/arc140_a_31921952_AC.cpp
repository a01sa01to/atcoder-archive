/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc140/submissions/31921952
 * Submitted at: 2022-05-24 00:14:06
 * Problem URL: https://atcoder.jp/contests/arc140/tasks/arc140_a
 * Result: AC
 * Execution Time: 7 ms
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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int ans = 1e9;
  for (int x = 1; x <= n; ++x) {
    // f(S) = x にできるか
    if (n % x != 0) continue;
    int cnt = n;
    rep(j, x) {
      vector<int> c(26, 0);
      for (int i = j; i < n; i += x) ++c[s[i] - 'a'];
      sort(c.rbegin(), c.rend());
      cnt -= c[0];
    }
    if (cnt <= k) ans = min(ans, x);
  }
  cout << ans << endl;
  return 0;
}