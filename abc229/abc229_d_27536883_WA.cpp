/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/27536883
 * Submitted at: 2021-11-27 21:49:34
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_d
 * Result: WA
 * Execution Time: 16 ms
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
  rep(i, s.size()) if (s[i] == '.') dot.push_back(i);
  if (dot.size() < k) return cout << s.size() << endl, 0;
  int ans = 0;
  for (int i = 0; i + k < dot.size(); i++) {
    ans = max(ans, dot[i + k] - dot[i] + 1);
  }
  cout << ans << endl;
  return 0;
}