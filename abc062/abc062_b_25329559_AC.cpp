/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc062/submissions/25329559
 * Submitted at: 2021-08-25 18:30:43
 * Problem URL: https://atcoder.jp/contests/abc062/tasks/abc062_b
 * Result: AC
 * Execution Time: 8 ms
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
  int h, w;
  cin >> h >> w;
  rep(i, w + 2) cout << "#";
  cout << endl;
  rep(i, h) {
    string s;
    cin >> s;
    cout << "#";
    rep(j, w) {
      cout << s[j];
    }
    cout << "#" << endl;
  }
  rep(i, w + 2) cout << "#";
  cout << endl;
  return 0;
}