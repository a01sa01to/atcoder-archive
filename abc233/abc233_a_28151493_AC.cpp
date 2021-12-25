/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28151493
 * Submitted at: 2021-12-25 23:23:53
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_a
 * Result: AC
 * Execution Time: 6 ms
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
  int x, y;
  cin >> x >> y;
  int ans = 0;
  while (x < y) {
    x += 10;
    ++ans;
  }
  cout << ans << endl;
  return 0;
}