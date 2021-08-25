/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/25329817
 * Submitted at: 2021-08-25 18:49:15
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_b
 * Result: AC
 * Execution Time: 8 ms
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
  ll2d Graph(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  rep(i, n) {
    cout << Graph[i].size() << endl;
  }
  return 0;
}