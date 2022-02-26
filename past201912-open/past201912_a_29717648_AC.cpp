/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29717648
 * Submitted at: 2022-02-27 00:16:08
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  if (isdigit(s[0]) && isdigit(s[1]) && isdigit(s[2])) {
    cout << stoi(s) * 2 << endl;
  }
  else {
    cout << "error" << endl;
  }
  return 0;
}