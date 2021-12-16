/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc003/submissions/27942632
 * Submitted at: 2021-12-17 00:07:57
 * Problem URL: https://atcoder.jp/contests/abc003/tasks/abc003_3
 * Result: AC
 * Execution Time: 8 ms
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
  int n, k;
  cin >> n >> k;
  priority_queue<int> pq;
  multiset<int> tosee;
  rep(i, n) {
    int a;
    cin >> a;
    pq.push(a);
  }
  rep(i, k) {
    tosee.insert(pq.top());
    pq.pop();
  }
  ld ans = 0;
  for (auto x : tosee) {
    ans = (ans + x) / 2;
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}