/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/30354034
 * Submitted at: 2022-03-22 23:58:32
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_a
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int d = 0;
  rep(i, s.size() - 1) {
    d += (s[i] - '0') * (i % 2 ? 1 : 3);
  }
  cout << (d % 10 == s.back() - '0' ? "Yes" : "No") << endl;
  return 0;
}