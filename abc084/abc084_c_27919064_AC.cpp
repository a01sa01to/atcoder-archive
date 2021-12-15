/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc084/submissions/27919064
 * Submitted at: 2021-12-15 11:30:46
 * Problem URL: https://atcoder.jp/contests/abc084/tasks/abc084_c
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
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef tuple<int, int, int> TP;
int main() {
  int n;
  cin >> n;
  vector<TP> v(n);
  rep(i, n - 1) {
    int a, b, c;
    cin >> a >> b >> c;
    v[i] = make_tuple(a, b, c);
  }
  vector<int> ans(n);
  ans[n - 1] = 0;
  rep(i, n - 1) {
    int now = 0;
    for (int j = i; j < n; ++j) {
      auto [c, s, f] = v[j];
      if (now < s) now = s;  // 始発まで待つ
      else if (f > 1 && now % f != 0)
        now += f - (now % f);  // 次まで待つ
      now += c;                // 次の駅まで行く
    }
    ans[i] = now;
  }
  rep(i, n) cout << ans[i] << endl;
  return 0;
}