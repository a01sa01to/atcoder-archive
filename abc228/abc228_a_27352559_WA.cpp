/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27352559
 * Submitted at: 2021-11-20 21:02:31
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_a
 * Result: WA
 * Execution Time: 8 ms
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
  int s, t, x;
  cin >> s >> t >> x;
  if (t < s) t += 24;
  puts(s <= x && x < t ? "Yes" : "No");
  return 0;
}