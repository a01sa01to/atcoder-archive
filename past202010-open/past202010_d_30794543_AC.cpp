/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/30794543
 * Submitted at: 2022-04-09 00:13:08
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_d
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  pair<int, int> ans = { 1e9, 1e9 };
  for (int x = 0; x <= n; ++x)
    for (int y = 0; y <= n; ++y) {
      string tmp = s;
      rep(i, n) {
        if (s[i] == '#') {
          for (int j = 1; j <= x; ++j) tmp[max(i - j, 0)] = '#';
          for (int j = 1; j <= y; ++j) tmp[min(i + j, n - 1)] = '#';
        }
      }
      bool chk = true;
      rep(i, n) if (tmp[i] == '.') chk = false;
      if (chk && ans.first + ans.second > x + y) ans = { x, y };
    }
  cout << ans.first << " " << ans.second << endl;
  return 0;
}