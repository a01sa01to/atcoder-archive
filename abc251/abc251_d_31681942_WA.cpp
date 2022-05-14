/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31681942
 * Submitted at: 2022-05-14 22:02:04
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_d
 * Result: WA
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int w;
  cin >> w;
  vector<int> a(0);
  for (int i = 1; i <= 9; ++i) {
    a.push_back(i);
    a.push_back(10 * i);
    a.push_back(100 * i);
  }
  for (int i = 1; i <= 9; ++i)
    for (int j = 1; j <= 9; ++j) {
      a.push_back(1000 * i + j);
      a.push_back(10000 * i + 10 * j);
      a.push_back(100000 * i + 100 * j);
    }
  a.push_back(1000000);
  sort(a.begin(), a.end());
  cout << a.size() << endl;
  rep(i, a.size()) cout << a[i] << " ";
  cout << endl;
  return 0;
}