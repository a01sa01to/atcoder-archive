/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc263/submissions/33811898
 * Submitted at: 2022-08-06 21:11:27
 * Problem URL: https://atcoder.jp/contests/abc263/tasks/abc263_c
 * Result: AC
 * Execution Time: 12 ms
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

int n, m;
void dfs(const int dep, const vector<int>& now) {
  if (dep == 0) {
    rep(i, now.size()) {
      cout << now[i] << " ";
    }
    cout << endl;
    return;
  }
  for (int i = (now.empty() ? 0 : now.back()) + 1; i <= m; i++) {
    vector<int> next(now);
    next.push_back(i);
    dfs(dep - 1, next);
  }
  return;
}

int main() {
  cin >> n >> m;
  dfs(n, {});
  return 0;
}