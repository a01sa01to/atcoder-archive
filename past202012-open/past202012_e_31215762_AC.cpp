/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/31215762
 * Submitted at: 2022-04-24 00:42:27
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_e
 * Result: AC
 * Execution Time: 9 ms
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

int main() {
  int h, w;
  cin >> h >> w;
  vector s(h, vector<char>(w)), t(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> s[i][j];
  rep(i, h) rep(j, w) cin >> t[i][j];
  set<pair<int, int>> st;
  {
    vector<pair<int, int>> tmp(0);
    int minx = 1e9, miny = 1e9;
    rep(i, h) rep(j, w) {
      if (t[i][j] == '#') {
        tmp.push_back({ i, j });
        minx = min(minx, i), miny = min(miny, j);
      }
    }
    for (auto [i, j] : tmp) st.insert({ i - minx, j - miny });
  }
  Debug(st);
  auto inRange = [&](int i, int j) {
    return i >= 0 && i < h && j >= 0 && j < w;
  };
  rep(i, h) rep(j, w) {
    {
      bool chk = true;
      for (auto [dx, dy] : st) {
        if (!inRange(i + dx, j + dy) || s[i + dx][j + dy] != '.') {
          chk = false;
          break;
        }
      }
      if (chk) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    {
      bool chk = true;
      for (auto [dx, dy] : st) {
        if (!inRange(i - dy, j + dx) || s[i - dy][j + dx] != '.') {
          chk = false;
          break;
        }
      }
      if (chk) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    {
      bool chk = true;
      for (auto [dx, dy] : st) {
        if (!inRange(i - dx, j - dy) || s[i - dx][j - dy] != '.') {
          chk = false;
          break;
        }
      }
      if (chk) {
        cout << "Yes" << endl;
        return 0;
      }
    }
    {
      bool chk = true;
      for (auto [dx, dy] : st) {
        if (!inRange(i + dy, j - dx) || s[i + dy][j - dx] != '.') {
          chk = false;
          break;
        }
      }
      if (chk) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}