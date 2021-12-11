/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27820270
 * Submitted at: 2021-12-11 21:05:06
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_c
 * Result: AC
 * Execution Time: 453 ms
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
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  while (q--) {
    int x;
    cin >> x;
    auto lb = lower_bound(a.begin(), a.end(), x);
    cout << n - (lb - a.begin()) << endl;
  }
  return 0;
}