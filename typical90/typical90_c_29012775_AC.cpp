/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29012775
 * Submitted at: 2022-02-03 00:11:42
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_c
 * Result: AC
 * Execution Time: 75 ms
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
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  vector<int> dist(n, INT_MAX);
  queue<int> que;
  {
    que.push(0);
    dist[0] = 0;
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      for (int i = 0; i < Graph[v].size(); i++) {
        int u = Graph[v][i];
        if (dist[u] == INT_MAX) {
          dist[u] = dist[v] + 1;
          que.push(u);
        }
      }
    }
  }
  {
    int i = (max_element(dist.begin(), dist.end()) - dist.begin());
    dist.assign(n, INT_MAX);
    que.push(i);
    dist[i] = 0;
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      for (int i = 0; i < Graph[v].size(); i++) {
        int u = Graph[v][i];
        if (dist[u] == INT_MAX) {
          dist[u] = dist[v] + 1;
          que.push(u);
        }
      }
    }
  }
  cout << *max_element(dist.begin(), dist.end()) + 1 << endl;
  return 0;
}