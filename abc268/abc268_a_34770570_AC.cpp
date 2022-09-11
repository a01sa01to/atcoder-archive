/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/34770570
 * Submitted at: 2022-09-11 10:12:58
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_a
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
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  set<int> s;
  rep(i, 5) {
    int a;
    cin >> a;
    s.insert(a);
  }
  cout << s.size() << endl;
  return 0;
}