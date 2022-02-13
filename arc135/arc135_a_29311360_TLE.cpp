/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc135/submissions/29311360
 * Submitted at: 2022-02-13 22:10:17
 * Problem URL: https://atcoder.jp/contests/arc135/tasks/arc135_a
 * Result: TLE
 * Execution Time: 2258 ms
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
typedef modint998244353 mint;

int main() {
  ll x;
  cin >> x;
  queue<ll> q;
  q.push(x);
  vector<ll> v(0);
  while (!q.empty()) {
    ll now = q.front();
    q.pop();
    if (now > 3) {
      q.push(now / 2);
      q.push((now + 1) / 2);
    }
    else {
      v.push_back(now);
    }
  }
  mint ans = 1;
  for (auto a : v) ans *= a;
  cout << ans.val() << endl;
  return 0;
}