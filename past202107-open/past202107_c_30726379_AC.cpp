/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/30726379
 * Submitted at: 2022-04-05 00:13:54
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  ll l, r;
  cin >> l >> r;
  if ((s.size() != 1 && s[0] == '0') || s.size() > 9) {
    cout << "No" << endl;
    return 0;
  }
  ll t = stoll(s);
  puts(l <= t && t <= r ? "Yes" : "No");
  return 0;
}