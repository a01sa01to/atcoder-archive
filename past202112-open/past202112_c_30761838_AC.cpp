/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202112-open/submissions/30761838
 * Submitted at: 2022-04-07 00:26:05
 * Problem URL: https://atcoder.jp/contests/past202112-open/tasks/past202112_c
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
  int n;
  cin >> n;
  vector<int> ans(6, 0);
  rep(i, n) {
    char p;
    string v;
    cin >> p >> v;
    if (v == "AC" && ans[p - 'A'] == 0) {
      ans[p - 'A'] = i + 1;
    }
  }
  rep(i, 6) cout << ans[i] << endl;
  return 0;
}