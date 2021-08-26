/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/25346948
 * Submitted at: 2021-08-26 18:53:12
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_d
 * Result: AC
 * Execution Time: 58 ms
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
  ll1d a(n);
  rep(i, n) cin >> a[i];
  int idx = 1, cnt = 0;
  rep(i, n) {
    if (idx == a[i]) {
      idx++;
    }
    else {
      cnt++;
    }
  }
  cout << (idx == 1 ? -1 : cnt) << endl;
  return 0;
}