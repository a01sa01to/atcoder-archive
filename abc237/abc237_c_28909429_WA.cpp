/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/28909429
 * Submitted at: 2022-01-30 21:10:33
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_c
 * Result: WA
 * Execution Time: 32 ms
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
  int i = s.size() - 1, j = 0;
  bool flag = false;
  while (j < i) {
    if (s[i] == 'a' && !flag) {
      --i;
      continue;
    }
    flag = true;
    if (s[i] != s[j]) {
      cout << "No" << endl;
      return 0;
    }
    --i;
    ++j;
  }
  cout << "Yes" << endl;
  return 0;
}