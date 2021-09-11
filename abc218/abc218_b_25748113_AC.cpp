/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/25748113
 * Submitted at: 2021-09-11 21:02:58
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_b
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
  rep(i, 26) {
    int p;
    cin >> p;
    cout << char('a' + p - 1);
  }
  cout << endl;
  return 0;
}