/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27814263
 * Submitted at: 2021-12-11 21:01:04
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_a
 * Result: AC
 * Execution Time: 3 ms
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
  int n;
  cin >> n;
  double ans = n;
  cout << fixed << setprecision(10) << ans / 100 << endl;
  return 0;
}