/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/26121689
 * Submitted at: 2021-09-26 21:01:58
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_a
 * Result: AC
 * Execution Time: 7 ms
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
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; c * i <= b; i++) {
    if (a <= c * i) {
      cout << c * i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}