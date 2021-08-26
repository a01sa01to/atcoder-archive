/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc037/submissions/25347781
 * Submitted at: 2021-08-26 19:51:00
 * Problem URL: https://atcoder.jp/contests/agc037/tasks/agc037_a
 * Result: AC
 * Execution Time: 19 ms
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
  string s, prev = "", now = "";
  cin >> s;
  int k = 0;
  rep(i, s.size()) {
    now += s[i];
    if (prev != now) {
      k++;
      prev = now;
      now = "";
    }
  }
  cout << k << endl;
  return 0;
}