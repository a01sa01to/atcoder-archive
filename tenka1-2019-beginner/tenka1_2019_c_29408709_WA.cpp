/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/29408709
 * Submitted at: 2022-02-19 00:18:22
 * Problem URL: https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_c
 * Result: WA
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  int bk = 0, wt = 0;
  const int inf = 1e9;
  int ans = inf;
  rep(i, n) if (s[i] == '.')++ wt;
  rep(i, n) {
    if (s[i] == '#') {
      --wt, ++bk;
      ans = min(ans, wt + bk);
    }
  }
  if (ans == inf) ans = 0;
  cout << ans << endl;
  return 0;
}