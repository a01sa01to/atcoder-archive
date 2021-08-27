/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc065/submissions/25367146
 * Submitted at: 2021-08-27 23:31:14
 * Problem URL: https://atcoder.jp/contests/abc065/tasks/abc065_b
 * Result: AC
 * Execution Time: 35 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

ll1d a;
vector<bool> seen;

void dfs(ll s, ll deps) {
  if (seen[s]) {
    cout << -1 << endl;
    return;
  }
  else if (s == 1) {
    cout << deps << endl;
    return;
  }
  seen[s] = true;
  dfs(a[s], deps + 1);
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  a.resize(n);
  seen.resize(n);
  rep(i, n) {
    int _a;
    cin >> _a;
    a[i] = --_a;
  }
  dfs(0, 0);
  return 0;
}