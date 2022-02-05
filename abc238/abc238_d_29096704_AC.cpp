/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc238/submissions/29096704
 * Submitted at: 2022-02-05 22:20:11
 * Problem URL: https://atcoder.jp/contests/abc238/tasks/abc238_d
 * Result: AC
 * Execution Time: 254 ms
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

bool f(ll x, ll i) {
  return x & (1LL << i);
}

int main() {
  int t;
  cin >> t;
  rep(_, t) {
    ll a, s;
    cin >> a >> s;
    if (a * 2 > s) {
      cout << "No" << endl;
      continue;
    }
    ll x = a, y = a;
    bool flag = true;
    rep(i, 60) {
      Debug(make_pair(x, y));
      if (f(x + y, i) == f(s, i)) {
        continue;
      }
      else if (!f(x, i)) {
        x |= 1LL << i;
      }
      else {
        cout << "No" << endl;
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << endl;
    }
  }
  return 0;
}