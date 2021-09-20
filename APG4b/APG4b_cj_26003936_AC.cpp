/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26003936
 * Submitted at: 2021-09-20 11:31:32
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cj
 * Result: AC
 * Execution Time: 10 ms
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
  ll avg = 0;
  ll1d a(n);
  rep(i, n) {
    cin >> a[i];
    avg += a[i];
  }
  avg /= n;
  rep(i, n) cout << abs(a[i] - avg) << endl;
  return 0;
}