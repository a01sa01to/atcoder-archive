/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/26307022
 * Submitted at: 2021-10-02 21:59:59
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_d
 * Result: AC
 * Execution Time: 177 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<P> v;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v.push_back({ a, 1 });
    v.push_back({ a + b, -1 });
  }
  sort(all(v));
  vector<int> ans(n);
  int now = 0, prev = 0;
  rep(i, 2 * n) {
    P a = v[i];
    if (now > 0) ans[now - 1] += a.first - prev;
    now += a.second;
    prev = a.first;
  }
  for (int x : ans) cout << x << " ";
  cout << endl;
  return 0;
}