/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc029/submissions/25367279
 * Submitted at: 2021-08-27 23:40:09
 * Problem URL: https://atcoder.jp/contests/agc029/tasks/agc029_a
 * Result: WA
 * Execution Time: 20 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  int ans = 0, bk = 0;
  rep(i, s.size()) {
    if (s[i] == 'W') {
      ans += bk;
    }
    else {
      bk++;
    }
  }
  cout << ans << endl;
  return 0;
}