/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28980101
 * Submitted at: 2022-02-01 00:23:22
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cf
 * Result: AC
 * Execution Time: 128 ms
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
  vector<int> a(n, 0), b(n, 0);
  rep(i, n) {
    if (i > 0) a[i] = a[i - 1], b[i] = b[i - 1];
    a[i] += (s[i] == 'o');
    b[i] += (s[i] == 'x');
  }
  ll ans = 0;
  rep(i, n) {
    auto itr1 = upper_bound(a.begin(), a.end(), a[i]);
    auto itr2 = upper_bound(b.begin(), b.end(), b[i]);
    ll cnt;
    if (s[i] == 'o') cnt = b.end() - itr2;
    else
      cnt = a.end() - itr1;
    ans += cnt;
    Debug(make_tuple(i, cnt, a.end() - itr1, b.end() - itr2));
  }
  cout << ans << endl;
  return 0;
}