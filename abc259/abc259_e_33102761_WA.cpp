/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33102761
 * Submitted at: 2022-07-09 21:54:48
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_e
 * Result: WA
 * Execution Time: 2207 ms
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
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
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
  int ans = 1;
  rep(i, n) {
    for (auto [key, val] : mp) {
      if (v[i].count(key)) {
        int x = v[i][key];
        if (val.second == -1) {
          ans++;
          break;
        }
        if (val.first == x && val.second != x) {
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