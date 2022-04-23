/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc249/submissions/31180274
 * Submitted at: 2022-04-23 21:12:12
 * Problem URL: https://atcoder.jp/contests/abc249/tasks/abc249_c
 * Result: AC
 * Execution Time: 18 ms
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
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  int ans = 0;
  rep(bit, 1 << n) {
    vector<int> cnt(26, 0);
    rep(i, n) {
      if (bit & (1 << i)) {
        rep(j, s[i].size()) {
          cnt[s[i][j] - 'a']++;
        }
      }
    }
    int tmp = 0;
    rep(i, 26) {
      if (cnt[i] == k) tmp++;
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}