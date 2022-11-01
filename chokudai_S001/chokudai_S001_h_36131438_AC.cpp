/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/36131438
 * Submitted at: 2022-11-01 14:24:10
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_h
 * Result: AC
 * Execution Time: 34 ms
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> lis(0);
  rep(i, n) {
    auto it = lower_bound(lis.begin(), lis.end(), a[i]);
    if (it != lis.end())
      *it = a[i];
    else
      lis.push_back(a[i]);
  }
  Debug(lis);
  cout << lis.size() << endl;
  return 0;
}