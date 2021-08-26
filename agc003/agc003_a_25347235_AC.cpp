/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc003/submissions/25347235
 * Submitted at: 2021-08-26 19:10:02
 * Problem URL: https://atcoder.jp/contests/agc003/tasks/agc003_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  vector<bool> dir(4, false);
  rep(i, s.size()) {
    switch (s[i]) {
      case 'N':
        dir[0] = true;
        break;
      case 'W':
        dir[1] = true;
        break;
      case 'S':
        dir[2] = true;
        break;
      case 'E':
        dir[3] = true;
        break;
    }
  }
  if (dir[0] == dir[2] && dir[1] == dir[3]) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}