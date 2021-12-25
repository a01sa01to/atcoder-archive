/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28151448
 * Submitted at: 2021-12-25 23:22:50
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_b
 * Result: AC
 * Execution Time: 13 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int l, r;
  cin >> l >> r;
  string s;
  cin >> s;
  reverse(s.begin() + l - 1, s.begin() + r);
  cout << s << endl;
  return 0;
}