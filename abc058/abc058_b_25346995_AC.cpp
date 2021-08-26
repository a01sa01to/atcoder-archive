/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc058/submissions/25346995
 * Submitted at: 2021-08-26 18:55:51
 * Problem URL: https://atcoder.jp/contests/abc058/tasks/abc058_b
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
  string o, e;
  cin >> o >> e;
  rep(i, e.size()) {
    cout << o[i] << e[i];
  }
  if (o.size() - e.size()) cout << o.back();
  cout << endl;
  return 0;
}