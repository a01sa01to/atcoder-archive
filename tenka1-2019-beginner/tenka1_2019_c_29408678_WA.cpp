/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/29408678
 * Submitted at: 2022-02-19 00:15:03
 * Problem URL: https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_c
 * Result: WA
 * Execution Time: 13 ms
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
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i, n - 1) {
    if (s[i] == '#' && s[i + 1] == '.') ++ans;
  }
  cout << ans << endl;
  return 0;
}