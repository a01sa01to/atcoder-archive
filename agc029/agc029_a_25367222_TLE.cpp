/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc029/submissions/25367222
 * Submitted at: 2021-08-27 23:37:05
 * Problem URL: https://atcoder.jp/contests/agc029/tasks/agc029_a
 * Result: TLE
 * Execution Time: 2205 ms
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
  int i = 0, ans = 0;
  while (i < s.size() - 1) {
    if (s[i] == 'B' && s[i + 1] == 'W') {
      ans++;
      swap(s[i], s[i + 1]);
      if (i > 0) i--;
    }
    else {
      i++;
    }
  }
  cout << ans << endl;
  return 0;
}