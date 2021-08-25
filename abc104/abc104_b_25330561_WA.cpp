/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc104/submissions/25330561
 * Submitted at: 2021-08-25 19:42:44
 * Problem URL: https://atcoder.jp/contests/abc104/tasks/abc104_b
 * Result: WA
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
  bool ans = true;
  int cnt = 0;
  int n = s.size();
  rep(i, n) {
    if (i == 0 && s[i] != 'A') {
      ans = false;
    }
    else if (2 <= i && i < n - 1 && isupper(s[i])) {
      if (s[i] == 'C') {
        cnt++;
      }
      else {
        ans = false;
      }
    }
  }
  if (cnt != 1) { ans = false; }
  cout << (ans ? "AC" : "WA") << endl;
  return 0;
}