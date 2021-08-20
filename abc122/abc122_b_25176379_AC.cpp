/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc122/submissions/25176379
 * Submitted at: 2021-08-21 00:14:03
 * Problem URL: https://atcoder.jp/contests/abc122/tasks/abc122_b
 * Result: AC
 * Execution Time: 7 ms
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

bool chk(string s) {
  rep(i, s.size()) {
    if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {}
    else {
      return false;
    }
  }
  return true;
}

int main() {
  cout << fixed << setprecision(15);
  string s;
  cin >> s;
  vector<ll> ans = { 0 };
  rep(i, s.size()) rep(j, s.size() - i) {
    string t = s.substr(i, j + 1);
    // cout << t << endl;
    if (chk(t)) ans.push_back(t.size());
  }
  sort(all(ans), greater<ll>());
  cout << ans[0] << endl;
  return 0;
}