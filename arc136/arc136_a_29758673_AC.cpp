/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc136/submissions/29758673
 * Submitted at: 2022-02-27 23:29:54
 * Problem URL: https://atcoder.jp/contests/arc136/tasks/arc136_a
 * Result: AC
 * Execution Time: 16 ms
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
  cin >> n;
  string s;
  cin >> s;
  string t = "";
  rep(i, n) {
    if (s[i] == 'A') t += "BB";
    else
      t += s[i];
  }
  Debug(t);
  string ans = "";
  int i = 0;
  n = t.size();
  while (i < n) {
    if (i < n - 1 && t[i] == 'B' && t[i + 1] == 'B') {
      ans += "A";
      i += 2;
    }
    else {
      ans += t[i];
      i++;
    }
  }
  cout << ans << endl;
  return 0;
}