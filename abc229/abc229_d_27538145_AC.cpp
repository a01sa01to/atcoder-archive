/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/27538145
 * Submitted at: 2021-11-27 21:55:05
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_d
 * Result: AC
 * Execution Time: 15 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  string s;
  int k;
  cin >> s >> k;
  vector<int> dot;
  dot.push_back(-1);
  rep(i, s.size()) if (s[i] == '.') dot.push_back(i);
  if (dot.size() < k) return cout << s.size() << endl, 0;
  dot.push_back(s.size());
  int ans = 0;
  for (int i = 0; i + k + 1 < dot.size(); i++) {
    ans = max(ans, dot[i + k + 1] - dot[i] - 1);
  }
  cout << ans << endl;
  return 0;
}