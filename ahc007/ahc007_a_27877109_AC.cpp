/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc007/submissions/27877109
 * Submitted at: 2021-12-12 18:23:55
 * Problem URL: https://atcoder.jp/contests/ahc007/tasks/ahc007_a
 * Result: AC
 * Execution Time: 41 ms
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
  int n = 400, m = 1995;
  vector<P> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;
  vector<P> b(m);
  vector<bool> use(m, false);
  dsu d(n);
  rep(i, m) {
    cin >> b[i].first >> b[i].second;
    if (!d.same(b[i].first, b[i].second)) {
      d.merge(b[i].first, b[i].second);
      use[i] = true;
    }
  }
  rep(i, m) {
    int x;
    cin >> x;
    if (use[i]) {
      cout << 1 << endl;
    }
    else {
      cout << 0 << endl;
    }
    fflush(stdout);
  }
  return 0;
}