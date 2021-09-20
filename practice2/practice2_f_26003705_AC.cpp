/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/26003705
 * Submitted at: 2021-09-20 11:17:10
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_f
 * Result: AC
 * Execution Time: 441 ms
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
  ll n, m;
  cin >> n >> m;
  ll1d a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  ll1d c = convolution<998244353>(a, b);
  rep(i, n + m - 1) cout << c[i] << " ";
  cout << endl;
  return 0;
}