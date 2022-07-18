/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-quala/submissions/33348674
 * Submitted at: 2022-07-19 01:19:59
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_c
 * Result: AC
 * Execution Time: 11 ms
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
  string s;
  cin >> s;
  int k;
  cin >> k;
  int n = s.size();
  rep(i, n) {
    if (s[i] == 'a') continue;
    int t = 'z' + 1 - s[i];
    if ('z' + 1 - s[i] <= k) {
      s[i] = 'a';
      k -= t;
    }
    Debug(i, s, k);
  }
  k %= 26;
  Debug(k);
  rep(_, k) {
    s.back()++;
    if (s.back() > 'z') {
      s.back() = 'a';
    }
    Debug(_, s);
  }
  cout << s << endl;
  return 0;
}