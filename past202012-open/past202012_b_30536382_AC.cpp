/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/30536382
 * Submitted at: 2022-03-29 00:05:55
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_b
 * Result: AC
 * Execution Time: 6 ms
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

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string t = "";
  vector<bool> used(26, false);
  for (int i = n - 1; i >= 0; --i) {
    if (!used[s[i] - 'a']) {
      t += s[i];
      used[s[i] - 'a'] = true;
    }
  }
  reverse(t.begin(), t.end());
  cout << t << endl;
  return 0;
}