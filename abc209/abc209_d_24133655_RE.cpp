/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/24133655
 * Submitted at: 2021-07-10 21:53:28
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_d
 * Result: RE
 * Execution Time: 2211 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ull> ull1d;
typedef vector<ull1d> ull2d;
typedef vector<ull2d> ull3d;

#define loop(i, n) for (ull i = 0; i < n; i++)
#define rloop(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(vec) vec.begin(), vec.end()

ull2d Graph, dp;
vector<bool> seen;

void dfs(ull i, ull c, ull s) {
  seen[i] = true;
  c++;
  for (ull x : Graph[i]) {
    if (seen[x]) { continue; }
    else {
      dp[s][x] = c;
      dp[x][s] = c;
      dfs(x, c, s);
    }
  }
}

int main() {
  cout << fixed << setprecision(15);
  ull n, q;
  cin >> n >> q;
  Graph.resize(n);
  dp.resize(n);
  seen.resize(n);
  loop(i, n) {
    dp[i].assign(n, (ull) 1e10);
    dp[i][i] = 0;
  }
  loop(i, n - 1) {
    ull _, __;
    cin >> _ >> __;
    _--;
    __--;
    Graph[_].push_back(__);
    Graph[__].push_back(_);
  }
  loop(i, n) {
    seen.assign(n, false);
    dfs(i, 0, i);
  }
  loop(i, q) {
    ull c, d;
    cin >> c >> d;
    if (dp[--c][--d] % 2 == 0) { cout << "Town" << endl; }
    else {
      cout << "Road" << endl;
    }
  }
  return 0;
}