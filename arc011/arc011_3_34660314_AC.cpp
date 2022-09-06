/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc011/submissions/34660314
 * Submitted at: 2022-09-07 00:00:37
 * Problem URL: https://atcoder.jp/contests/arc011/tasks/arc011_3
 * Result: AC
 * Execution Time: 27 ms
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
  string f, l;
  cin >> f >> l;
  if (f == l) {
    cout << 0 << endl;
    cout << f << endl;
    cout << l << endl;
    return 0;
  }
  int n;
  cin >> n;
  vector<string> s(n + 2);
  s[0] = f, s[1] = l;
  rep(i, n) cin >> s[i + 2];
  vector Graph(n + 2, vector<int>(0));
  rep(i, n + 2) rep(j, n + 2) {
    if (i >= j) continue;
    int cnt = 0;
    rep(k, s[i].size()) {
      if (s[i][k] != s[j][k]) cnt++;
    }
    if (cnt == 1) {
      Graph[i].push_back(j);
      Graph[j].push_back(i);
    }
  }
  vector<int> prv(n + 2, -1);
  queue<int> que;
  que.push(0);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (int next_v : Graph[v]) {
      if (prv[next_v] != -1) continue;
      prv[next_v] = v;
      que.push(next_v);
    }
  }
  if (prv[1] == -1) {
    cout << -1 << endl;
  }
  else {
    vector<int> ans;
    int v = 1;
    while (v != 0) {
      ans.push_back(v);
      v = prv[v];
    }
    ans.push_back(0);
    reverse(ans.begin(), ans.end());
    cout << ans.size() - 2 << endl;
    for (int v : ans) {
      cout << s[v] << endl;
    }
  }
  return 0;
}