/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc001/submissions/25992974
 * Submitted at: 2021-09-19 23:26:28
 * Problem URL: https://atcoder.jp/contests/atc001/tasks/fft_c
 * Result: AC
 * Execution Time: 354 ms
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
  ll1d a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  ll1d con = convolution_ll(a, b);
  cout << 0 << endl;
  rep(i, 2 * n - 1) {
    cout << con[i] << endl;
  }
  return 0;
}