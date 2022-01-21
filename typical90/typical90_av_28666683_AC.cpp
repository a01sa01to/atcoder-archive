/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28666683
 * Submitted at: 2022-01-22 00:14:39
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_av
 * Result: AC
 * Execution Time: 158 ms
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
  int n, k;
  cin >> n >> k;
  ll ans = 0;
  priority_queue<ll> pq;
  rep(i, n) {
    ll a, b;
    cin >> a >> b;
    pq.push(b);
    pq.push(a - b);
  }
  while (k-- && !pq.empty()) {
    ans += pq.top();
    pq.pop();
  }
  cout << ans << endl;
  return 0;
}