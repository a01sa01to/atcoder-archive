/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/30515363
 * Submitted at: 2022-03-28 00:02:30
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  auto sz = s.find("post");
  if (sz == string::npos) {
    cout << "none" << endl;
  }
  else {
    Debug(sz);
    cout << sz / 4 + 1 << endl;
  }
  return 0;
}