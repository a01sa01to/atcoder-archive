/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc162/submissions/27775909
 * Submitted at: 2021-12-09 13:51:18
 * Problem URL: https://atcoder.jp/contests/abc162/tasks/abc162_d
 * Result: AC
 * Execution Time: 72 ms
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
  string s;
  cin >> n >> s;

  // cnt[i] = i文字目まで見た時の {R, G, B} の個数
  vector cnt(n, vector<int>(3, 0));
  rep(i, n) {
    if (i >= 1) cnt[i] = cnt[i - 1];
    if (s[i] == 'R') ++cnt[i][0];
    if (s[i] == 'G') ++cnt[i][1];
    if (s[i] == 'B') ++cnt[i][2];
  }

  ll ans = 0;
  for (int j = 1; j < n - 1; ++j)
    for (int k = j + 1; k < n; ++k) {
      if (s[j] == s[k]) continue;
      // j-i = k-j -> i=2j-k
      int i = 2 * j - k;
      if ((s[j] == 'R' && s[k] == 'G') || (s[j] == 'G' && s[k] == 'R')) {
        // Bを選ぶ
        ans += cnt[j - 1][2];
        if (i >= 0 && s[i] == 'B') --ans;
      }
      if ((s[j] == 'R' && s[k] == 'B') || (s[j] == 'B' && s[k] == 'R')) {
        // Gを選ぶ
        ans += cnt[j - 1][1];
        if (i >= 0 && s[i] == 'G') --ans;
      }
      if ((s[j] == 'G' && s[k] == 'B') || (s[j] == 'B' && s[k] == 'G')) {
        // Rを選ぶ
        ans += cnt[j - 1][0];
        if (i >= 0 && s[i] == 'R') --ans;
      }
    }
  cout << ans << endl;
  return 0;
}