/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27360076
 * Submitted at: 2021-11-20 21:10:45
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_b
 * Result: AC
 * Execution Time: 36 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }
  vector<bool> know(n, false);
  queue<int> q;
  q.push(--x);
  while (!q.empty()) {
    int p = q.front();
    q.pop();
    if (know[p]) continue;
    know[p] = true;
    q.push(a[p]);
  }
  cout << accumulate(know.begin(), know.end(), 0) << endl;
  return 0;
}