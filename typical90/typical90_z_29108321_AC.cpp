/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29108321
 * Submitted at: 2022-02-06 00:16:34
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_z
 * Result: AC
 * Execution Time: 77 ms
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

int main() {
  int n;
  cin >> n;
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  vector<int> c(n, -1);
  queue<int> que;
  que.push(0);
  c[0] = 0;
  vector<int> cnt = { 0, 0 };
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    ++cnt[c[v]];
    for (int i = 0; i < Graph[v].size(); i++) {
      int u = Graph[v][i];
      if (c[u] == -1) {
        c[u] = !c[v];
        que.push(u);
      }
    }
  }
  int x = (cnt[0] > cnt[1]) ? 0 : 1;
  int counter = 0;
  rep(i, n) {
    if (c[i] == x && counter < n / 2) {
      cout << i + 1 << " ";
      ++counter;
    }
  }
  cout << endl;
  return 0;
}