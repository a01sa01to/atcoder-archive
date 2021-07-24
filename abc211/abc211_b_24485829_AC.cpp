/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/24485829
 * Submitted at: 2021-07-24 21:04:10
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_b
 * Result: AC
 * Execution Time: 6 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

void chk(vector<bool> &t, string s) {
  if (s == "H") { t[0] = true; }
  if (s == "2B") { t[1] = true; }
  if (s == "3B") { t[2] = true; }
  if (s == "HR") { t[3] = true; }
}

int main() {
  cout << fixed << setprecision(15);
  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  vector<bool> t(4, false);
  chk(t, s1);
  chk(t, s2);
  chk(t, s3);
  chk(t, s4);
  bool ans = t[0] && t[1] && t[2] && t[3];
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}