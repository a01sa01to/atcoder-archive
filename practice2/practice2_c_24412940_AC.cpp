/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/24412940
 * Submitted at: 2021-07-20 23:34:05
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_c
 * Result: AC
 * Execution Time: 210 ms
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
  int q;
  cin >> q;
  loop(_, q) {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << floor_sum(n, m, a, b) << endl;
  }
  return 0;
}