/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26004091
 * Submitted at: 2021-09-20 11:40:46
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cf
 * Result: AC
 * Execution Time: 6 ms
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
  int n, s;
  cin >> n >> s;
  vector<int> a(n), p(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> p[i];
  int cnt = 0;
  rep(i, n) rep(j, n) {
    if (a[i] + p[j] == s) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}