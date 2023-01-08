/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/37888914
 * Submitted at: 2023-01-09 01:36:37
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_e
 * Result: AC
 * Execution Time: 391 ms
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
  vector Graph(n * n, vector<int>(0));
  auto getId = [&](int i, int j) {
    if (i > j) swap(i, j);
    return i * n + j;
  };
  rep(i, n) {
    int prev;
    cin >> prev;
    --prev;
    rep(j, n - 2) {
      int a;
      cin >> a;
      --a;
      Graph[getId(i, prev)].push_back(getId(i, a));
      prev = a;
    }
  }

  vector<ll> sorted;
  vector<ll> deg_in(n * n);
  rep(i, n * n) {
    for (auto next_v : Graph[i]) {
      deg_in[next_v]++;
    }
  }
  queue<pair<int, int>> que;
  rep(i, n * n) {
    if (deg_in[i] == 0) { que.push({ 1, i }); }
  }
  int ans = 0;
  while (!que.empty()) {
    auto [d, v] = que.front();
    ans = d;
    que.pop();
    sorted.push_back(v);
    bool chk = false;
    for (auto next_v : Graph[v]) {
      // v と next_v をつなぐ辺を削除（したようにする）
      deg_in[next_v]--;
      if (deg_in[next_v] == 0) que.push({ d + 1, next_v });
    }
  }

  bool isDAG = true;
  rep(i, n * n) {
    if (deg_in[i] != 0) { isDAG = false; }
  }
  // cout << "The Graph " << (isDAG ? "doesn't have" : "has") << " cycle(s)" << endl;
  if (isDAG) {
    cout << ans << endl;
  }
  else {
    cout << -1 << endl;
  }
  return 0;
}