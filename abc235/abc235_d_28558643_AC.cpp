/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/28558643
 * Submitted at: 2022-01-15 22:10:08
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_d
 * Result: AC
 * Execution Time: 8 ms
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
  int a, n;
  cin >> a >> n;
  set<int> seen;
  queue<pair<int, int>> q;
  seen.insert(n);
  q.push({ n, 0 });
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    if (x == 1) {
      cout << y << endl;
      return 0;
    }
    if (x % a == 0 && !seen.count(x / a)) {
      seen.insert(x / a);
      q.push({ x / a, y + 1 });
    }
    if (x >= 10) {
      string t = to_string(x);
      if (t[0] != '0' && t[1] != '0') {
        t.push_back(t[0]);
        int tmp = stoi(t.substr(1));
        if (!seen.count(tmp)) {
          seen.insert(tmp);
          q.push({ tmp, y + 1 });
        }
      }
    }
  }
  cout << -1 << endl;
  return 0;
}