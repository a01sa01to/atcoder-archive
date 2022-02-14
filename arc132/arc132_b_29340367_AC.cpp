/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc132/submissions/29340367
 * Submitted at: 2022-02-15 00:00:22
 * Problem URL: https://atcoder.jp/contests/arc132/tasks/arc132_b
 * Result: AC
 * Execution Time: 40 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  // a: ひっくり返さない
  // b: 最初ひっくり返す
  // c: 最後
  // d: 両方
  deque<int> a, b, c, d;
  vector<int> p(n);
  rep(i, n) {
    cin >> p[i];
    a.push_back(p[i]);
    b.push_front(p[i]);
    c.push_back(p[i]);
    d.push_front(p[i]);
  }
  sort(p.begin(), p.end());
  int ans = 1e9;
  // a
  rep(i, n) {
    if (a[0] == p[0]) {
      bool chk = true;
      rep(j, n) {
        if (a[j] != p[j]) chk = false;
      }
      if (chk) ans = min(ans, i);
      break;
    }
    a.push_back(a.front());
    a.pop_front();
  }
  // b
  rep(i, n) {
    if (b[0] == p[0]) {
      bool chk = true;
      rep(j, n) {
        if (b[j] != p[j]) chk = false;
      }
      if (chk) ans = min(ans, i + 1);
      break;
    }
    b.push_back(b.front());
    b.pop_front();
  }
  // c
  rep(i, n) {
    if (c[n - 1] == p[0]) {
      bool chk = true;
      rep(j, n) {
        if (c[n - j - 1] != p[j]) chk = false;
      }
      if (chk) ans = min(ans, i + 1);
      break;
    }
    c.push_back(c.front());
    c.pop_front();
  }
  // d
  rep(i, n) {
    if (d[n - 1] == p[0]) {
      bool chk = true;
      rep(j, n) {
        if (d[n - j - 1] != p[j]) chk = false;
      }
      if (chk) ans = min(ans, i + 2);
      break;
    }
    d.push_back(d.front());
    d.pop_front();
  }
  cout << ans << endl;
  return 0;
}