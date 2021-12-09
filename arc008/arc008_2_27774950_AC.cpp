/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc008/submissions/27774950
 * Submitted at: 2021-12-09 12:01:10
 * Problem URL: https://atcoder.jp/contests/arc008/tasks/arc008_2
 * Result: AC
 * Execution Time: 7 ms
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
  int n, m;
  string _nam, _kit;
  cin >> n >> m >> _nam >> _kit;
  vector<int> nam(26, 0), kit(26, 0);
  rep(i, n)++nam[_nam[i] - 'A'];
  rep(i, m)++kit[_kit[i] - 'A'];
  bool chk = true;
  rep(i, 26) {
    if (nam[i] != 0 && kit[i] == 0) {
      chk = false;
      break;
    }
  }
  if (!chk) cout << -1 << endl;
  else {
    int ans = 0;
    rep(i, 26) if (kit[i] != 0) ans = max(ans, (nam[i] - 1) / kit[i] + 1);
    cout << ans << endl;
  }
  return 0;
}