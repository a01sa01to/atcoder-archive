/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc116/submissions/28083250
 * Submitted at: 2021-12-24 00:37:46
 * Problem URL: https://atcoder.jp/contests/arc116/tasks/arc116_b
 * Result: AC
 * Execution Time: 78 ms
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
typedef modint998244353 mint;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());
  mint ans = 0;
  rep(i, n) ans += mint(a[i]) * mint(a[i]);
  mint sum = 0;
  rep(i, n) {
    ans += mint(a[i]) * mint(sum);
    sum = 2 * sum + mint(a[i]);
  }
  cout << ans.val() << endl;
  return 0;
}