/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc174/submissions/27901475
 * Submitted at: 2021-12-14 00:29:55
 * Problem URL: https://atcoder.jp/contests/abc174/tasks/abc174_c
 * Result: AC
 * Execution Time: 18 ms
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
  int k;
  cin >> k;
  int now = 0;
  for (int i = 1; i <= k; ++i) {
    now = (now * 10 + 7) % k;
    if (now == 0) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}