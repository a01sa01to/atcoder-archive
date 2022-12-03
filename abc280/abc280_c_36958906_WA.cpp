/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36958906
 * Submitted at: 2022-12-03 21:07:49
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_c
 * Result: WA
 * Execution Time: 34 ms
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
  string s, t;
  cin >> s >> t;
  vector<int> cnt1(26, 0), cnt2(26, 0);
  rep(i, s.size()) cnt1[s[i] - 'a']++;
  rep(i, t.size()) cnt2[t[i] - 'a']++;
  char ans = 'a';
  rep(i, 26) if (cnt1[i] != cnt2[i]) ans = i + 'a';
  rep(i, s.size()) {
    if (t[i] == ans) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}