/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37337033
 * Submitted at: 2022-12-17 21:19:21
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_d
 * Result: AC
 * Execution Time: 471 ms
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
    a--, b--;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  vector<bool> visited(n, false);
  map<int, array<set<int>, 2>> gp;
  dsu d(n);
  rep(i, n) {
    if (visited[i]) continue;
    set<int> bk, wt;
    queue<int> q;
    q.push(i);
    bk.insert(i);
    visited[i] = true;
    while (!q.empty()) {
      int v = q.front();
      q.pop();
      for (auto nv : Graph[v]) {
        d.merge(v, nv);
        if ((bk.count(nv) && bk.count(v)) || (wt.count(nv) && wt.count(v))) {
          cout << 0 << endl;
          return 0;
        }
        if (visited[nv]) continue;
        visited[nv] = true;
        if (bk.count(v)) {
          wt.insert(nv);
        }
        else {
          bk.insert(nv);
        }
        q.push(nv);
      }
    }
    gp[d.leader(i)] = { bk, wt };
  }
  ll ans = 0;
  rep(i, n) {
    int l = d.leader(i);
    // black
    if (gp[l][0].count(i)) {
      ans += gp[l][1].size() - Graph[i].size();
      ans += n - d.size(i);
    }
    else {
      ans += gp[l][0].size() - Graph[i].size();
      ans += n - d.size(i);
    }
  }
  cout << ans / 2 << endl;
  return 0;
}