/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30044659
 * Submitted at: 2022-03-12 21:22:00
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_d
 * Result: AC
 * Execution Time: 39 ms
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
  ll n, x;
  cin >> n >> x;
  string _s;
  cin >> _s;
  string s = "";
  rep(i, n) {
    if (_s[i] == 'U') {
      if (!s.empty() && s.back() != 'U') {
        s.pop_back();
      }
      else {
        s.push_back('U');
      }
    }
    else {
      s.push_back(_s[i]);
    }
  }
  Debug(s);
  rep(i, s.size()) {
    if (s[i] == 'U') {
      x /= 2;
    }
    else if (s[i] == 'L') {
      x = 2 * x;
    }
    else {
      x = 2 * x + 1;
    }
  }
  cout << x << endl;
  return 0;
}