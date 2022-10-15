/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35684239
 * Submitted at: 2022-10-15 22:00:34
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_d
 * Result: WA
 * Execution Time: 593 ms
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

  map<int, int> row_comp, col_comp;
  {
    vector<int> row, col;
    for (auto [x, y] : v) {
      row.push_back(x);
      col.push_back(y);
    }
    sort(row.begin(), row.end());
    sort(col.begin(), col.end());
    row.erase(unique(row.begin(), row.end()), row.end());
    col.erase(unique(col.begin(), col.end()), col.end());
    map<int, int> row_tmp, col_tmp;
    {
      int idx = 0, now = 0;
      rep(i, row.size()) {
        if (now != row[i] - 1) idx++;
        now = row[i];
        row_comp[idx] = row[i];
        row_tmp[row[i]] = idx;
        idx++;
      }
    }
    {
      int idx = 0, now = 0;
      rep(i, col.size()) {
        if (now != col[i] - 1) idx++;
        now = col[i];
        col_comp[idx] = col[i];
        col_tmp[col[i]] = idx;
        idx++;
      }
    }
    // for (auto &[x, y] : v) {
    //   x = row_tmp[x];
    //   y = col_tmp[y];
    // }
    {
      if (row_tmp.count(rs)) rs = row_tmp[rs];
      else {
        auto itr = row_tmp.upper_bound(rs);
        if (itr != row_tmp.end()) {
          rs = itr->second - 1;
        }
        else if (!row_tmp.empty()) {
          rs = row_tmp.rbegin()->second + 1;
        }
      }
    }
    {
      if (col_tmp.count(cs)) cs = col_tmp[cs];
      else {
        auto itr = col_tmp.upper_bound(cs);
        if (itr != col_tmp.end()) {
          cs = itr->second - 1;
        }
        else if (!col_tmp.empty()) {
          cs = col_tmp.rbegin()->second + 1;
        }
      }
    }
  }
  Debug(rs, cs);
  Debug(row_comp);
  Debug(col_comp);
  exit(0);
  int q;
  cin >> q;
  while (q--) {
    char d;
    int l;
    cin >> d >> l;
    if (d == 'L') {
      if (row[nowX].empty() || row[nowX].front() > nowY) {
        nowY = max(nowY - l, 1);
        cs = 0;
      }
      else {
        auto itr = prev(lower_bound(row[nowX].begin(), row[nowX].end(), nowY));
        nowY = max(*itr + 1, nowY - l);
        if (col_comp.count(cs)) cs = col_comp[cs];
      }
    }
    if (d == 'R') {
      if (row[nowX].empty() || row[nowX].back() < nowY) {
        nowY = min(nowY + l, w);
        cs = col_comp.rbegin()->first + 1;
      }
      else {
        auto itr = upper_bound(row[nowX].begin(), row[nowX].end(), nowY);
        nowY = min(nowY + l, *itr - 1);
        if (col_comp.count(cs)) cs = col_comp[cs];
      }
    }
    if (d == 'U') {
      if (col[nowY].empty() || col[nowY].front() > nowX) {
        nowX = max(nowX - l, 1);
        rs = 0;
      }
      else {
        auto itr = prev(lower_bound(col[nowY].begin(), col[nowY].end(), nowX));
        nowX = max(nowX - l, *itr + 1);
        if (row_comp.count(rs)) rs = row_comp[rs];
      }
    }
    if (d == 'D') {
      if (col[nowY].empty() || col[nowY].back() < nowX) {
        nowX = min(nowX + l, h);
        rs = row_comp.rbegin()->first + 1;
      }
      else {
        auto itr = upper_bound(col[nowY].begin(), col[nowY].end(), nowX);
        nowX = min(nowX + l, *itr - 1);
        if (row_comp.count(rs)) rs = row_comp[rs];
      }
    }
    Debug(d, l, nowX, nowY, rs, cs);
    cout << nowX << " " << nowY << endl;
  }
  return 0;
}