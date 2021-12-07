/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc003/submissions/27753965
 * Submitted at: 2021-12-07 22:03:17
 * Problem URL: https://atcoder.jp/contests/arc003/tasks/arc003_2
 * Result: AC
 * Execution Time: 8 ms
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
  cin >> n;
  vector<string> v;
  rep(i, n) {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    v.push_back(s);
  }
  sort(v.begin(), v.end());
  rep(i, n) {
    reverse(v[i].begin(), v[i].end());
    cout << v[i] << endl;
  }
  return 0;
}