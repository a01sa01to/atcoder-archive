/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/28746046
 * Submitted at: 2022-01-23 21:41:44
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_d
 * Result: TLE
 * Execution Time: 2205 ms
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

int dfs(set<int> used, int score) {
  if (used.size() == 2 * n) {
    Debug(score);
    return score;
  }
  int ans = 0;
  rep(i, 2 * n) rep(j, 2 * n) {
    if (i >= j) continue;
    if (used.count(i) || used.count(j)) continue;
    used.insert(i);
    used.insert(j);
    Debug(P(i, j));
    ans = max(ans, dfs(used, score ^ a[i][j - i - 1]));
    used.erase(i);
    used.erase(j);
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

  int ans = 0;
  rep(i, 2 * n - 1) {
    Debug(P(i, a[0][i]));
    ans = max(ans, dfs({ 0, i + 1 }, a[0][i]));
  }

  cout << ans << endl;
  return 0;
}