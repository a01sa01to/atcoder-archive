/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/discovery2016-qual/submissions/35002041
 * Submitted at: 2022-09-20 00:47:36
 * Problem URL: https://atcoder.jp/contests/discovery2016-qual/tasks/discovery_2016_qual_b
 * Result: AC
 * Execution Time: 48 ms
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
  vector<vector<int>> idx(1e5 + 1, vector<int>(0));
  rep(i, n) {
    int x;
    cin >> x;
    idx[x].push_back(i);
  }
  int now = 0;
  int ans = 1;
  rep(i, 1e5 + 1) {
    if (idx[i].size() == 0) continue;
    auto it = lower_bound(idx[i].begin(), idx[i].end(), now);
    if (it == idx[i].begin()) {
      now = idx[i].back();
    }
    else {
      now = *(it - 1);
      ans++;
    }
  }
  if (now == 0) ans--;
  cout << ans << endl;
  return 0;
}