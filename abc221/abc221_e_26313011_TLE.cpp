/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/26313011
 * Submitted at: 2021-10-02 22:27:10
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_e
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

typedef modint998244353 mint;

mint pow2(int p) {
  mint a = 1;
  rep(i, p) a *= 2;
  return a;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll1d a(n);
  rep(i, n) cin >> a[i];
  mint ans = 0;
  rep(i, n) for (int j = i + 1; j < n; j++) {
    if (a[i] <= a[j]) ans += pow2(j - i);
  }
  cout << ans.val() / 2 << endl;
  return 0;
}