/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc244/submissions/30271381
 * Submitted at: 2022-03-20 21:03:17
 * Problem URL: https://atcoder.jp/contests/abc244/tasks/abc244_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string t;
  cin >> n >> t;
  pair<int, int> now = { 0, 0 }, dir = { 1, 0 };
  rep(i, n) {
    if (t[i] == 'R') {
      if (dir == pair<int, int>(1, 0))
        dir = { 0, -1 };
      else if (dir == pair<int, int>(0, -1))
        dir = { -1, 0 };
      else if (dir == pair<int, int>(-1, 0))
        dir = { 0, 1 };
      else if (dir == pair<int, int>(0, 1))
        dir = { 1, 0 };
    }
    else {
      now = { now.first + dir.first, now.second + dir.second };
    }
  }
  cout << now.first << " " << now.second << endl;
  return 0;
}