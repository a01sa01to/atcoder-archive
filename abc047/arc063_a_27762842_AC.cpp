/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc047/submissions/27762842
 * Submitted at: 2021-12-08 15:21:43
 * Problem URL: https://atcoder.jp/contests/abc047/tasks/arc063_a
 * Result: AC
 * Execution Time: 12 ms
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
  string s;
  cin >> s;
  int cnt = 0;
  char prev = s[0];
  rep(i, s.size()) {
    if (s[i] != prev) {
      ++cnt;
      prev = s[i];
    }
  }
  cout << cnt << endl;
  return 0;
}