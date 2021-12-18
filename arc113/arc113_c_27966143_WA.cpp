/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/27966143
 * Submitted at: 2021-12-18 18:02:17
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_c
 * Result: WA
 * Execution Time: 16 ms
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
  string s;
  cin >> s;
  ll ans = 0;
  vector<ll> cnt(26, 0);
  for (int i = s.size() - 3; i >= 0; --i) {
    ++cnt[s[i] - 'a'];
    if (s[i] == s[i + 1]) {
      ans += s.size() - i;
      ans -= cnt[s[i] - 'a'];
      cnt.assign(26, 0);
      cnt[s[i] - 'a'] = s.size() - i;
      // cout << ans << endl;
    }
  }
  cout << ans << endl;
  return 0;
}