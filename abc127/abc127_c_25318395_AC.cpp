/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc127/submissions/25318395
 * Submitted at: 2021-08-24 23:28:56
 * Problem URL: https://atcoder.jp/contests/abc127/tasks/abc127_c
 * Result: AC
 * Execution Time: 49 ms
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
  int n, m;
  cin >> n >> m;
  int l = 0, r = n;
  rep(i, m) {
    int lm, rm;
    cin >> lm >> rm;
    l = max(l, lm);
    r = min(r, rm);
  }
  if (l > r) {
    cout << 0 << endl;
  }
  else {
    cout << (r - l + 1) << endl;
  }
  return 0;
}