/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/34296390
 * Submitted at: 2022-08-24 00:00:26
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_d
 * Result: TLE
 * Execution Time: 2206 ms
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
  vector<tuple<int, int, int>> Edge(n - 1);
  vector Graph(n, vector<int>(0));
  rep(i, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    Edge[i] = { a, b, -1 };
    Graph[a].push_back(i);
    Graph[b].push_back(i);
  }

  queue<int> que;
  que.push(0);
  vector<unordered_set<int>> used(n);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (auto e : Graph[v]) {
      auto [a, b, c] = Edge[e];
      if (c != -1) continue;
      int next_v = a ^ b ^ v;
      int t = 1;
      while (used[v].count(t) || used[next_v].count(t)) t++;
      Edge[e] = { a, b, t };
      used[v].insert(t);
      used[next_v].insert(t);
      que.push(next_v);
    }
  }
  cout << max_element(Graph.begin(), Graph.end(), [](auto a, auto b) {
            return a.size() < b.size();
          })->size()
       << endl;
  for (auto [a, b, c] : Edge) cout << c << endl;
  return 0;
}