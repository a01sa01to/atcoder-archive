/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202005-open/submissions/30778965
 * Submitted at: 2022-04-08 00:32:34
 * Problem URL: https://atcoder.jp/contests/past202005-open/tasks/past202005_d
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(5);
  rep(i, 5) cin >> s[i];
  string ans = "";

  const vector<vector<string>> v = {
    { "###", "#.#", "#.#", "#.#", "###" },
    { ".#.", "##.", ".#.", ".#.", "###" },
    { "###", "..#", "###", "#..", "###" },
    { "###", "..#", "###", "..#", "###" },
    { "#.#", "#.#", "###", "..#", "..#" },
    { "###", "#..", "###", "..#", "###" },
    { "###", "#..", "###", "#.#", "###" },
    { "###", "..#", "..#", "..#", "..#" },
    { "###", "#.#", "###", "#.#", "###" },
    { "###", "#.#", "###", "..#", "###" }
  };

  rep(i, n) {
    rep(c, 10) {
      bool ok = true;
      rep(y, 5) {
        for (int x = 1; x <= 3; ++x) {
          ok &= s[y][i * 4 + x] == v[c][y][x - 1];
        }
      }
      if (ok) {
        ans.push_back(c + '0');
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}