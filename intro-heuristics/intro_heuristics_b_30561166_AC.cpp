/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/intro-heuristics/submissions/30561166
 * Submitted at: 2022-03-30 10:57:07
 * Problem URL: https://atcoder.jp/contests/intro-heuristics/tasks/intro_heuristics_b
 * Result: AC
 * Execution Time: 15 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int score(int& d, vector<int>& c, vector<vector<int>>& s, vector<int>& t) {
  int ret = 0;
  vector<int> last(26, 0);
  rep(i, d) {
    ret += s[i][t[i]];
    last[t[i]] = i + 1;
    rep(j, 26) ret -= c[j] * (i - last[j] + 1);
    cout << ret << endl;
  }
  return ret;
}

int main() {
  int d;
  cin >> d;
  vector<int> c(26);
  rep(i, 26) cin >> c[i];
  vector s(d, vector<int>(26, 0));
  rep(i, d) rep(j, 26) cin >> s[i][j];
  vector<int> t(d);
  rep(i, d) {
    cin >> t[i];
    --t[i];
  }
  score(d, c, s, t);
  return 0;
}