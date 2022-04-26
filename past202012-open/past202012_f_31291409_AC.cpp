/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/31291409
 * Submitted at: 2022-04-27 00:54:13
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_f
 * Result: AC
 * Execution Time: 233 ms
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
  int n, m;
  cin >> n >> m;
  vector<tuple<int, int, int>> v;
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    v.push_back({ --a, --b, --c });
  }
  int ans = 0;
  rep(bit, 1 << n) {
    // rep(i, n) cout << (bit & (1 << i) ? 1 : 0);
    // cout << endl;
    vector<int> chk(m, 0);
    set<int> used;
    rep(i, m) {
      auto [a, b, c] = v[i];
      if (bit & (1 << a)) {
        chk[i]++;
        used.insert(a);
      }
      if (bit & (1 << b)) {
        chk[i]++;
        used.insert(b);
      }
      if (bit & (1 << c)) {
        chk[i]++;
        used.insert(c);
      }
    }
    bool flag = true;
    rep(i, m) flag &= chk[i] < 3;
    if (!flag) continue;
    else {
      set<int> u;
      rep(i, m) {
        if (chk[i] == 2) {
          auto [a, b, c] = v[i];
          if (!used.count(a)) u.insert(a);
          if (!used.count(b)) u.insert(b);
          if (!used.count(c)) u.insert(c);
        }
      }
      Debug(u, u.size());
      ans = max(ans, (int) u.size());
    }
  }
  cout << ans << endl;
  return 0;
}