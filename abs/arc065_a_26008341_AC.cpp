/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26008341
 * Submitted at: 2021-09-20 16:11:23
 * Problem URL: https://atcoder.jp/contests/abs/tasks/arc065_a
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
int main() {
  string s;
  cin >> s;
  while (s != "") {
    int idx = s.size();
    if (idx >= 5 && s.substr(idx - 5, 5) == "dream") {
      s.erase(idx - 5, 5);
    }
    else if (idx >= 7 && s.substr(idx - 7, 7) == "dreamer") {
      s.erase(idx - 7, 7);
    }
    else if (idx >= 5 && s.substr(idx - 5, 5) == "erase") {
      s.erase(idx - 5, 5);
    }
    else if (idx >= 6 && s.substr(idx - 6, 6) == "eraser") {
      s.erase(idx - 6, 6);
    }
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}