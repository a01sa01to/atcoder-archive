/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33111057
 * Submitted at: 2022-07-09 22:15:02
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_e
 * Result: WA
 * Execution Time: 207 ms
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
  int ans = 0;
  for (auto [key, val] : mp) {
    if (val.second != -1) {
      ans = 1;
      break;
    }
  }
  rep(i, n) {
    for (auto [key, val] : v[i]) {
      if (v[i].count(key)) {
        auto [x, y] = mp[key];
        if (y == -1) {
          ans++;
          break;
        }
        if (val == x && val != y) {
          Debug("foo", i, key, val);
          ans++;
          break;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}