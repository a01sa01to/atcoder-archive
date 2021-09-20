/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26004314
 * Submitted at: 2021-09-20 11:54:25
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cd
 * Result: AC
 * Execution Time: 8 ms
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

int main() {
  int cnt = 0;
  rep(i, 9) {
    rep(j, 9) {
      int n;
      cin >> n;
      int _ = (i + 1) * (j + 1);
      if (_ != n) cnt++;
      cout << _ << (j == 8 ? "" : " ");
    }
    cout << endl;
  }
  cout << 81 - cnt << endl
       << cnt << endl;
  return 0;
}