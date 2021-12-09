/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc052/submissions/27776645
 * Submitted at: 2021-12-09 15:00:00
 * Problem URL: https://atcoder.jp/contests/agc052/tasks/agc052_a
 * Result: AC
 * Execution Time: 57 ms
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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string ans = "";
    rep(i, n) ans.push_back('0');
    rep(i, n) ans.push_back('1');
    ans.push_back('0');
    cout << ans << endl;
  }
  return 0;
}