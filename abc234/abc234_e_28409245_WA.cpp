/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/28409245
 * Submitted at: 2022-01-08 22:09:42
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_e
 * Result: WA
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

void solve(ll x) {
  if (x < 100) cout << x << endl;
  else if (x >= 10000000000) {
    string a = to_string(x);
    char tmp = (a[0] >= a[1] ? a[0] : a[0] + 1);
    if (tmp > '9') a.push_back('0');
    rep(i, a.size()) cout << tmp;
    cout << endl;
  }
  else {
    string s = to_string(x);
    int a = -9;
    while (true) {
      bool chk = true;
      s = to_string(x);
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
}

int main() {
  ll x;
  cin >> x;
  solve(x);
  return 0;
}