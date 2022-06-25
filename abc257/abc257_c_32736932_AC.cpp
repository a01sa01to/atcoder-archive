/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32736932
 * Submitted at: 2022-06-25 22:03:30
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_c
 * Result: AC
 * Execution Time: 86 ms
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
  string s;
  cin >> n >> s;
  vector<pair<int, int>> a, c;
  rep(i, n) {
    pair<int, int> p;
    cin >> p.first;
    p.second = i;
    if (s[i] == '1')
      a.push_back(p);
    else
      c.push_back(p);
  }
  sort(a.begin(), a.end());
  sort(c.begin(), c.end());
  int l = 0;
  int ans = 0;
  if (a.size() == 0 || c.size() == 0) {
    cout << n << endl;
    return 0;
  }
  rep(i, a.size()) {
    while (l < c.size() && a[i].first > c[l].first) ++l;
    ans = max(ans, (int) a.size() - i + l);
    Debug(i, l, ans);
  }
  cout << ans << endl;
  return 0;
}