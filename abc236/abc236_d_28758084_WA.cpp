/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/28758084
 * Submitted at: 2022-01-23 22:46:25
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_d
 * Result: WA
 * Execution Time: 902 ms
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
typedef pair<int, int> P;
int n;
vector<vector<int>> a;

int dfs(set<int> nused, int score) {
  if (nused.empty()) {
    Debug(score);
    return score;
  }
  int ans = 0;
  int i = *(nused.begin());
  rep(j, 2 * n) {
    if (i >= j || !nused.count(j)) continue;
    nused.erase(i);
    nused.erase(j);
    Debug(P(i, j));
    ans = max(ans, dfs(nused, score ^ a[i][j - i - 1]));
    nused.insert(i);
    nused.insert(j);
  }
  return ans;
}

int main() {
  cin >> n;
  a.resize(2 * n - 1);
  rep(i, 2 * n - 1) {
    for (int j = i + 1; j < 2 * n; ++j) {
      int x;
      cin >> x;
      a[i].push_back(x);
    }
  }

  Debug(a);
  set<int> nused;
  int ans = 0;
  rep(i, 2 * n) nused.insert(i);
  nused.erase(0);
  rep(i, 2 * n - 1) {
    nused.insert(i);
    ans = max(ans, dfs(nused, 0));
    nused.erase(i);
  }
  cout << ans << endl;
  return 0;
}