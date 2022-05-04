/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202104-open/submissions/31440616
 * Submitted at: 2022-05-05 00:31:27
 * Problem URL: https://atcoder.jp/contests/past202104-open/tasks/past202104_g
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef tuple<int, int, int> TP;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector Graph(n, vector<pair<int, int>>(0));
  priority_queue<TP, vector<TP>, greater<TP>> pq;
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    pq.push({ c, a, b });
  }
  set<int> visited;
  visited.insert(0);
  rep(i, q) {
    int x;
    cin >> x;
    priority_queue<TP, vector<TP>, greater<TP>> nxt;
    set<int> tmp;
    while (!pq.empty()) {
      auto [c, a, b] = pq.top();
      pq.pop();
      if ((visited.count(a) || visited.count(b)) && c <= x) {
        tmp.insert(a);
        tmp.insert(b);
      }
      else {
        nxt.push({ c, a, b });
      }
    }
    swap(pq, nxt);
    visited.merge(tmp);
    cout << visited.size() << endl;
  }
  return 0;
}