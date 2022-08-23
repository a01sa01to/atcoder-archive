/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/34296766
 * Submitted at: 2022-08-24 00:16:48
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_d
 * Result: AC
 * Execution Time: 448 ms
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

struct mex {
  mex() {}
  set<pair<int, int>> s;
  int get() {
    if (s.empty()) return 1;
    auto it = s.begin();
    if (it->first != 1) return 1;
    int res = it->second;
    return res + 1;
  }
  void add(int x) {
    if (s.empty()) {
      s.insert({ x, x });
      return;
    }
    auto ne = s.lower_bound({ x, 0 });
    if (ne != s.end() && ne->first == x) return;
    if (ne == s.begin()) {
      if (ne->first == x + 1) {
        s.insert({ x, ne->second });
        s.erase(ne);
      }
      else {
        s.insert({ x, x });
      }
      return;
    }
    auto pr = ne;
    pr--;
    if (pr->second == x - 1) {
      if (ne != s.end() && ne->first == x + 1) {
        s.insert({ pr->first, ne->second });
        s.erase(pr);
        s.erase(ne);
      }
      else {
        s.insert({ pr->first, x });
        s.erase(pr);
      }
    }
    else {
      if (ne != s.end() && ne->first == x + 1) {
        s.insert({ x, ne->second });
        s.erase(ne);
      }
      else {
        s.insert({ x, x });
      }
    }
  }
};

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
  vector<set<int>> used(n);
  vector<mex> mx(n);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (auto e : Graph[v]) {
      auto [a, b, c] = Edge[e];
      if (c != -1) continue;
      int next_v = a ^ b ^ v;
      int t = max(mx[v].get(), mx[next_v].get());
      while (used[v].count(t) || used[next_v].count(t)) t++;
      Edge[e] = { a, b, t };
      used[v].insert(t);
      used[next_v].insert(t);
      mx[v].add(t);
      mx[next_v].add(t);
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