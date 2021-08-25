/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc050/submissions/25330645
 * Submitted at: 2021-08-25 19:49:31
 * Problem URL: https://atcoder.jp/contests/abc050/tasks/abc050_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll1d t(n);
  ll sum = 0;
  rep(i, n) {
    cin >> t[i];
    sum += t[i];
  }
  int m;
  cin >> m;
  rep(i, m) {
    int p, x;
    cin >> p >> x;
    cout << sum - t[--p] + x << endl;
  }
  return 0;
}