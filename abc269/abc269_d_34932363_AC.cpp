/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34932363
 * Submitted at: 2022-09-17 21:21:10
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_d
 * Result: AC
 * Execution Time: 23 ms
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
  constexpr int Pos = 1001;
  auto id = [&](int i, int j) {
    return i * Pos + j;
  };
  set<pair<int, int>> s;
  dsu d(Pos * Pos * 4);
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    x += Pos, y += Pos;
    s.insert({ x, y });
    if (s.count({ x - 1, y - 1 })) d.merge(id(x, y), id(x - 1, y - 1));
    if (s.count({ x - 1, y })) d.merge(id(x, y), id(x - 1, y));
    if (s.count({ x, y - 1 })) d.merge(id(x, y), id(x, y - 1));
    if (s.count({ x, y + 1 })) d.merge(id(x, y), id(x, y + 1));
    if (s.count({ x + 1, y })) d.merge(id(x, y), id(x + 1, y));
    if (s.count({ x + 1, y + 1 })) d.merge(id(x, y), id(x + 1, y + 1));
  }
  set<int> l;
  for (auto [x, y] : s) l.insert(d.leader(id(x, y)));
  cout << l.size() << endl;
  return 0;
}