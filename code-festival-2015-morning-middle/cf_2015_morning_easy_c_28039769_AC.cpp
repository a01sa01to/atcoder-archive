/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-morning-middle/submissions/28039769
 * Submitted at: 2021-12-21 01:43:10
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-morning-middle/tasks/cf_2015_morning_easy_c
 * Result: AC
 * Execution Time: 6 ms
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
  ll n, k, m, r;
  cin >> n >> k >> m >> r;
  vector<int> s(n - 1);
  rep(i, n - 1) cin >> s[i];
  sort(s.rbegin(), s.rend());
  if (k < n) {
    ll nowscore = accumulate(s.begin(), s.begin() + k, 0LL);
    // cout << "[DEB1] " << r * k << endl;
    // cout << "[DEB2] " << nowscore << endl;
    // cout << "[DEB3] " << nowscore - s[k - 1] + m << endl;
    if (nowscore >= r * k) {
      cout << 0 << endl;
    }
    else if (nowscore - s[k - 1] + m < r * k) {
      cout << -1 << endl;
    }
    else {
      cout << r * k - (nowscore - s[k - 1]) << endl;
    }
  }
  else {
    ll nowscore = accumulate(s.begin(), s.end(), 0LL);
    if (nowscore >= r * n) {
      cout << 0 << endl;
    }
    else if (nowscore + m < r * n) {
      cout << -1 << endl;
    }
    else {
      cout << r * n - nowscore << endl;
    }
  }
  return 0;
}