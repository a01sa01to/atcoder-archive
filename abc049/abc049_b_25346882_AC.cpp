/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc049/submissions/25346882
 * Submitted at: 2021-08-26 18:49:01
 * Problem URL: https://atcoder.jp/contests/abc049/tasks/abc049_b
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
  int h, w;
  cin >> h >> w;
  rep(i, h) {
    string s;
    cin >> s;
    cout << s << endl
         << s << endl;
  }
  return 0;
}