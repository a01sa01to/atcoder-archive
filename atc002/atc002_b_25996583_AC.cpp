/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc002/submissions/25996583
 * Submitted at: 2021-09-20 00:03:14
 * Problem URL: https://atcoder.jp/contests/atc002/tasks/atc002_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
typedef long long ll;
typedef modint v;
int main() {
  ll n, m, p;
  cin >> n >> m >> p;
  v::set_mod(m);
  v a = n;
  cout << a.pow(p).val() << endl;
  return 0;
}