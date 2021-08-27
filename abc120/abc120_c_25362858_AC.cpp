/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc120/submissions/25362858
 * Submitted at: 2021-08-27 18:27:37
 * Problem URL: https://atcoder.jp/contests/abc120/tasks/abc120_c
 * Result: AC
 * Execution Time: 10 ms
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
  int n = s.size();
  int red = 0, blue = 0;
  rep(i, n) {
    if (s[i] == '0') { red++; }
    else {
      blue++;
    }
  }
  cout << 2 * min(red, blue) << endl;
  return 0;
}