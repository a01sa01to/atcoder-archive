/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/35699417
 * Submitted at: 2022-10-16 00:19:13
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_d
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

map<pair<int, int>, ll> memo;
ll Combination(int n, int r) {
  if (n < r) return 0;
  if (n == r || r == 0) return 1;
  if (memo.count({ n, r })) return memo[{ n, r }];
  return memo[{ n, r }] = Combination(n - 1, r - 1) + Combination(n - 1, r);
}

int main() {
  int a, b;
  cin >> a >> b;
  ll k;
  cin >> k;

  string ans = "";
  while (a + b > 0) {
    if (a == 0) {
      ans.push_back('b');
      b--;
      continue;
    }
    if (b == 0) {
      ans.push_back('a');
      a--;
      continue;
    }
    ll comb = Combination(a + b - 1, a - 1);
    Debug(a, b, k, comb, ans);
    if (k <= comb) {
      ans.push_back('a');
      a--;
    }
    else {
      ans.push_back('b');
      b--;
      k -= comb;
    }
  }
  cout << ans << endl;
  return 0;
}