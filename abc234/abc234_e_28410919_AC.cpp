/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/28410919
 * Submitted at: 2022-01-08 22:17:13
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_e
 * Result: AC
 * Execution Time: 8 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll x;
  cin >> x;
  if (x < 100) cout << x << endl;
  else {
    int a = -9;
    while (true) {
      bool chk = true;
      string s = to_string(x);
      rep(i, s.size() - 1) {
        s[i + 1] = s[i] + a;
        if (!isdigit(s[i + 1]) || stoll(s) < x) {
          chk = false;
          break;
        }
      }
      Debug(s);
      if (chk) {
        cout << s << endl;
        break;
      }
      ++a;
      if (a == 10) {
        char tmp = ++s[0];
        s.assign(s.size(), '0');
        s[0] = tmp;
        x = stoll(s);
        if (s[0] > '9') {
          s.assign(s.size(), '1');
          s.push_back('1');
          cout << s << endl;
          break;
        }
        a = -9;
      }
    }
  }
  return 0;
}