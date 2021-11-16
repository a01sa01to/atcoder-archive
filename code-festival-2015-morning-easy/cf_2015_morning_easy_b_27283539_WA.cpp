/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-morning-easy/submissions/27283539
 * Submitted at: 2021-11-16 10:08:37
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-morning-easy/tasks/cf_2015_morning_easy_b
 * Result: WA
 * Execution Time: 14 ms
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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  rep(i, n / 2) {
    if (n % 2 == 1) {
      ans = -1;
      break;
    }
    if (s[i] != s[n / 2 + i]) ans++;
  }
  cout << ans << endl;
  return 0;
}