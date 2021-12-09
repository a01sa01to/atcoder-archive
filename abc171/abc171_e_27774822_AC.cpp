/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/27774822
 * Submitted at: 2021-12-09 11:45:24
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_e
 * Result: AC
 * Execution Time: 87 ms
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
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int allxor = 0;
  rep(i, n) allxor ^= a[i];
  rep(i, n) cout << (allxor ^ a[i]) << " ";
  cout << endl;
  return 0;
}