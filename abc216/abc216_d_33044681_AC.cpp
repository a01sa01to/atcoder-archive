/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/33044681
 * Submitted at: 2022-07-08 01:02:37
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_d
 * Result: AC
 * Execution Time: 272 ms
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
  vector a(m, queue<int>());
  vector<int> mp(n + 1, -1);
  queue<pair<int, int>> q;
  auto f = [&](int x) {
    if (a[x].empty()) return;
    int af = a[x].front();
    if (mp[af] == -1) {
      mp[af] = x;
    }
    else {
      q.push({ mp[af], x });
    }
  };

  rep(i, m) {
    int k;
    cin >> k;
    rep(_, k) {
      int ai;
      cin >> ai;
      a[i].push(ai);
    }
    f(i);
  }
  Debug(a);
  while (!q.empty()) {
    auto [i, j] = q.front();
    q.pop();
    assert(a[i].front() == a[j].front());
    a[i].pop();
    a[j].pop();
    f(i), f(j);
    Debug(a, q);
  }
  bool chk = true;
  rep(i, m) chk &= a[i].empty();
  cout << (chk ? "Yes" : "No") << endl;
  return 0;
}