/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc011/submissions/27802997
 * Submitted at: 2021-12-11 11:06:49
 * Problem URL: https://atcoder.jp/contests/agc011/tasks/agc011_a
 * Result: AC
 * Execution Time: 49 ms
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
  ll n, c, k;
  cin >> n >> c >> k;
  vector<P> v(n);
  rep(i, n) {
    cin >> v[i].first;
    v[i].second = v[i].first + k;
  }
  sort(v.begin(), v.end(), [](P& a, P& b) {
    return a.second < b.second;
  });
  int ans = 0, leave = 0, cnt = 0;
  rep(i, n) {
    if (v[i].first <= leave && cnt < c) ++cnt;
    else {
      ++ans;
      leave = v[i].second;
      cnt = 1;
    }
  }
  cout << ans << endl;
  return 0;
}