/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29519324
 * Submitted at: 2022-02-20 21:14:05
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_d
 * Result: TLE
 * Execution Time: 2205 ms
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
  vector<int> t(0);
  rep(i, n) {
    int a;
    cin >> a;
    t.push_back(a);
    if (a <= t.size()) {
      bool chk = true;
      rep(j, a) {
        if (t[t.size() - 1 - j] != a) {
          chk = false;
          break;
        }
      }
      if (chk) rep(_, a) t.pop_back();
    }
    cout << t.size() << endl;
  }
  return 0;
}