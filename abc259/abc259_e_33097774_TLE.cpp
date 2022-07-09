/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33097774
 * Submitted at: 2022-07-09 21:43:59
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_e
 * Result: TLE
 * Execution Time: 2214 ms
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
  int n;
  cin >> n;
  vector<unordered_map<int, int>> v(n);
  unordered_map<int, pair<int, int>> mp;
  rep(i, n) {
    int m;
    cin >> m;
    rep(_, m) {
      int a, b;
      cin >> a >> b;
      v[i][a] = b;
      if (!mp.count(a)) {
        mp[a] = { b, -1 };
      }
      else {
        auto [x, y] = mp[a];
        if (b > x) {
          mp[a] = { b, x };
        }
        else if (b > y) {
          mp[a] = { x, b };
        }
      }
    }
  }
  set<vector<pair<int, int>>> s;
  rep(i, n) {
    vector<pair<int, int>> vv;
    for (auto [key, val] : mp) {
      if (v[i].count(key)) {
        int x = v[i][key];
        auto [y, z] = val;
        if (x == y) {
          vv.push_back({ key, z });
        }
        else {
          vv.push_back({ key, y });
        }
      }
      else {
        vv.push_back({ key, val.first });
      }
    }
    s.insert(vv);
  }
  cout << s.size() << endl;
  return 0;
}