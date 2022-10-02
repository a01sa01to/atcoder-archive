/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc149/submissions/35361279
 * Submitted at: 2022-10-03 00:08:19
 * Problem URL: https://atcoder.jp/contests/arc149/tasks/arc149_b
 * Result: AC
 * Execution Time: 163 ms
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
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first;
  rep(i, n) cin >> v[i].second;
  sort(v.begin(), v.end());

  vector<int> lis(0);
  rep(i, n + 1) {
    auto it = lower_bound(lis.begin(), lis.end(), v[i].second);
    if (it != lis.end())
      *it = v[i].second;
    else
      lis.push_back(v[i].second);
  }

  cout << n + lis.size() << endl;
  return 0;
}