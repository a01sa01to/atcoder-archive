/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/25565021
 * Submitted at: 2021-09-04 21:05:29
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_c
 * Result: AC
 * Execution Time: 77 ms
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
  ll1d p(n), q(n);
  rep(i, n) {
    cin >> p[i];
    q[p[i] - 1] = i + 1;
  }
  rep(i, n) {
    cout << q[i] << " ";
  }
  cout << endl;
  return 0;
}