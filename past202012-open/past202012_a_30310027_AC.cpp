/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/30310027
 * Submitted at: 2022-03-21 00:00:07
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  rep(i, 3) {
    if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
      cout << s[i] << endl;
      return 0;
    }
  }
  cout << "draw" << endl;
  return 0;
}