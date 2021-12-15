/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc138/submissions/27919210
 * Submitted at: 2021-12-15 11:47:11
 * Problem URL: https://atcoder.jp/contests/abc138/tasks/abc138_d
 * Result: WA
 * Execution Time: 221 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
  }
  vector<int> ans(n, 0);
  rep(i, q) {
    int a, b;
    cin >> a >> b;
    ans[a - 1] += b;
  }
  queue<int> que;
  que.push(0);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    rep(i, Graph[v].size()) {
      int u = Graph[v][i];
      ans[u] += ans[v];
      que.push(u);
    }
  }
  rep(i, n) cout << ans[i] << " ";
  cout << endl;
  return 0;
}