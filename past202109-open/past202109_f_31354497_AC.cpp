/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202109-open/submissions/31354497
 * Submitted at: 2022-04-30 11:37:25
 * Problem URL: https://atcoder.jp/contests/past202109-open/tasks/past202109_f
 * Result: AC
 * Execution Time: 22 ms
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
  string s;
  cin >> s;
  vector<int> ans(n, -1);
  vector<int> nused(0);
  rep(i, n) {
    if (s[i] == '1')
      ans[i] = i + 1;
    else
      nused.push_back(i + 1);
  }
  if (nused.size() == 1) {
    cout << -1 << endl;
  }
  else {
    int j = 1;
    rep(i, n) {
      if (ans[i] == -1) {
        ans[i] = nused[j % nused.size()];
        ++j;
      }
    }
    rep(i, n) cout << ans[i] << " ";
    cout << endl;
  }
  return 0;
}