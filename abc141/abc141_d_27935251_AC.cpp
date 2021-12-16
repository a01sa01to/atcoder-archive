/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/27935251
 * Submitted at: 2021-12-16 14:44:10
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_d
 * Result: AC
 * Execution Time: 59 ms
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
  int n, m;
  cin >> n >> m;
  priority_queue<int> pq;
  rep(i, n) {
    int a;
    cin >> a;
    pq.push(a);
  }
  while (m > 0) {
    int a = pq.top();
    pq.pop();
    pq.push(a / 2);
    --m;
  }
  ll ans = 0;
  while (!pq.empty()) {
    ans += pq.top();
    pq.pop();
  }
  cout << ans << endl;
  return 0;
}