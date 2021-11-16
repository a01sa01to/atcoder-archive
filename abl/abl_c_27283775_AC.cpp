/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abl/submissions/27283775
 * Submitted at: 2021-11-16 10:38:19
 * Problem URL: https://atcoder.jp/contests/abl/tasks/abl_c
 * Result: AC
 * Execution Time: 58 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int n, m;
  cin >> n >> m;
  dsu d(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    d.merge(a, b);
  }
  cout << int(d.groups().size()) - 1 << endl;
  return 0;
}