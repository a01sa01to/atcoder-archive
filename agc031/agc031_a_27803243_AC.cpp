/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc031/submissions/27803243
 * Submitted at: 2021-12-11 11:26:14
 * Problem URL: https://atcoder.jp/contests/agc031/tasks/agc031_a
 * Result: AC
 * Execution Time: 9 ms
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
typedef modint1000000007 mint;

int main() {
  int n;
  string s;
  cin >> n >> s;
  vector<int> cnt(26, 0);
  rep(i, n)++ cnt[s[i] - 'a'];
  mint ans = 1;
  rep(i, 26) ans *= cnt[i] + 1;   // どこからとるか or とらない
  cout << ans.val() - 1 << endl;  // 空文字列は除く
  return 0;
}