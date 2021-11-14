/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc227/submissions/27246721
 * Submitted at: 2021-11-14 09:26:19
 * Problem URL: https://atcoder.jp/contests/abc227/tasks/abc227_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<int> s(n);
  rep(i, n) cin >> s[i];
  int ans = 0;
  rep(i, n) {
    bool chk = false;
    for (int a = 1; a <= s[i]; a++) {
      for (int b = 1; b <= s[i]; b++) {
        if (4 * a * b + 3 * a + 3 * b == s[i]) {
          chk = true;
          break;
        }
      }
    }
    if (!chk) ans++;
  }
  cout << ans << endl;
  return 0;
}