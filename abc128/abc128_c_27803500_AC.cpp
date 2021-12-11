/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/27803500
 * Submitted at: 2021-12-11 11:43:52
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_c
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector light(m, pair<int, vector<int>>(0, vector<int>(0)));
  rep(i, m) {
    int k;
    cin >> k;
    rep(j, k) {
      int x;
      cin >> x;
      light[i].second.push_back(--x);
    }
  }
  rep(i, m) cin >> light[i].first;
  int ans = 0;
  rep(i, 1 << n) {
    int cnt = 0;
    rep(j, m) {
      int swon = 0;
      rep(k, light[j].second.size()) if (i & 1 << light[j].second[k])++ swon;
      if (swon % 2 == light[j].first) ++cnt;
    }
    if (cnt == m) ++ans;
  }
  cout << ans << endl;
  return 0;
}