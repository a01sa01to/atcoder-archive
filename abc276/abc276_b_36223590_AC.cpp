/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36223590
 * Submitted at: 2022-11-05 21:02:09
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_b
 * Result: AC
 * Execution Time: 256 ms
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
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  rep(i, n) sort(Graph[i].begin(), Graph[i].end());
  rep(i, n) {
    cout << Graph[i].size();
    for (auto x : Graph[i]) cout << " " << x + 1;
    cout << endl;
  }
  return 0;
}