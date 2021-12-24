/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/28098210
 * Submitted at: 2021-12-25 00:32:29
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
 * Result: AC
 * Execution Time: 775 ms
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
  int n;
  string s;
  cin >> n >> s;
  vector cnt(n, vector<bool>(10, false));
  for (int i = n - 1; i >= 0; --i) {
    if (i < n - 1) cnt[i] = cnt[i + 1];
    cnt[i][s[i] - '0'] = true;
  }
  int ans = 0;
  vector used(10, vector<bool>(10, false));
  for (int i = 0; i < n - 2; ++i) for (int j = i + 1; j < n - 1; ++j) {
      if (used[s[i] - '0'][s[j] - '0']) continue;
      used[s[i] - '0'][s[j] - '0'] = true;
      ans += accumulate(cnt[j + 1].begin(), cnt[j + 1].end(), 0);
      // cout << "[DEB] " << i << " " << j << " " << ans << endl;
    }
  cout << ans << endl;
  return 0;
}