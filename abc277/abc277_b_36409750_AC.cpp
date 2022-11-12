/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36409750
 * Submitted at: 2022-11-12 21:02:57
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_b
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

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  rep(i, n) {
    if (string("HDCS").find(s[i][0]) == string::npos) {
      cout << "No" << endl;
      return 0;
    }
    if (string("A23456789TJQK").find(s[i][1]) == string::npos) {
      cout << "No" << endl;
      return 0;
    }
  }
  sort(s.begin(), s.end());
  s.erase(unique(s.begin(), s.end()), s.end());
  if (s.size() == n)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}