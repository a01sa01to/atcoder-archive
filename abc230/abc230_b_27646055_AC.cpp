/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27646055
 * Submitted at: 2021-12-03 21:03:41
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_b
 * Result: AC
 * Execution Time: 10 ms
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
  string s;
  cin >> s;
  string t = "";
  for (int i = 0; i < 1e5; ++i) t += "oxx";
  auto itr = t.find(s);
  puts(itr == string::npos ? "No" : "Yes");
  return 0;
}