/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35685552
 * Submitted at: 2022-10-15 22:05:52
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_d
 * Result: AC
 * Execution Time: 964 ms
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
  int h, w, rs, cs;
  cin >> h >> w >> rs >> cs;
  int nowX = rs, nowY = cs;
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  map<int, vector<int>> row, col;
  rep(i, n) {
    row[v[i].first].push_back(v[i].second);
    col[v[i].second].push_back(v[i].first);
  }
  for (auto &p : row) sort(p.second.begin(), p.second.end());
  for (auto &p : col) sort(p.second.begin(), p.second.end());

  int q;
  cin >> q;
  while (q--) {
    char d;
    int l;
    cin >> d >> l;
    if (d == 'L') {
      if (row[nowX].empty() || row[nowX].front() > nowY) {
        nowY = max(nowY - l, 1);
      }
      else {
        auto itr = prev(upper_bound(row[nowX].begin(), row[nowX].end(), nowY));
        nowY = max(*itr + 1, nowY - l);
      }
    }
    if (d == 'R') {
      if (row[nowX].empty() || row[nowX].back() < nowY) {
        nowY = min(nowY + l, w);
      }
      else {
        auto itr = upper_bound(row[nowX].begin(), row[nowX].end(), nowY);
        nowY = min(nowY + l, *itr - 1);
      }
    }
    if (d == 'U') {
      if (col[nowY].empty() || col[nowY].front() > nowX) {
        nowX = max(nowX - l, 1);
      }
      else {
        auto itr = prev(upper_bound(col[nowY].begin(), col[nowY].end(), nowX));
        nowX = max(nowX - l, *itr + 1);
      }
    }
    if (d == 'D') {
      if (col[nowY].empty() || col[nowY].back() < nowX) {
        nowX = min(nowX + l, h);
      }
      else {
        auto itr = upper_bound(col[nowY].begin(), col[nowY].end(), nowX);
        nowX = min(nowX + l, *itr - 1);
      }
    }
    cout << nowX << " " << nowY << endl;
  }
  return 0;
}