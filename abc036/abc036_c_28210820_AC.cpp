/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc036/submissions/28210820
 * Submitted at: 2021-12-29 00:45:15
 * Problem URL: https://atcoder.jp/contests/abc036/tasks/abc036_c
 * Result: AC
 * Execution Time: 261 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  {
    int idx = 0;
    set<int> s;
    rep(i, n) s.insert(a[i]);
    map<int, int> m;
    for (auto x : s) m[x] = idx++;
    rep(i, n) a[i] = m[a[i]];
  }
  rep(i, n) cout << a[i] << endl;
  return 0;
}