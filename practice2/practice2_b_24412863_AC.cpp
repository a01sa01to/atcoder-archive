/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/24412863
 * Submitted at: 2021-07-20 23:31:08
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_b
 * Result: AC
 * Execution Time: 861 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, q;
  cin >> n >> q;
  fenwick_tree<ll> ft(n);
  loop(i, n) {
    ll a;
    cin >> a;
    ft.add(i, a);
  }
  loop(_, q) {
    int t, u, v;
    cin >> t >> u >> v;
    if (t) {
      cout << ft.sum(u, v) << endl;
    }
    else {
      ft.add(u, v);
    }
  }
  return 0;
}