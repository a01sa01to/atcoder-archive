/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27644199
 * Submitted at: 2021-12-03 21:02:15
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_a
 * Result: AC
 * Execution Time: 7 ms
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

string padstart(string s, ll n, char c) {
  if (s.size() >= n) return s;
  return string(n - s.size(), c) + s;
}

int main() {
  int n;
  cin >> n;
  if (n >= 42) ++n;
  cout << "AGC" << padstart(to_string(n), 3, '0') << endl;
  return 0;
}