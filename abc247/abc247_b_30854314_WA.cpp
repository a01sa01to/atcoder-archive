/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc247/submissions/30854314
 * Submitted at: 2022-04-10 21:08:34
 * Problem URL: https://atcoder.jp/contests/abc247/tasks/abc247_b
 * Result: WA
 * Execution Time: 7 ms
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
  vector<pair<string, string>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  set<string> st;
  rep(i, n) {
    bool f = true, s = true;
    rep(j, n) {
      if (j <= i) continue;
      if (v[i].first == v[j].first) f = false;
      if (v[i].first == v[j].second) f = false;
      if (v[i].second == v[j].first) s = false;
      if (v[i].second == v[j].second) s = false;
    }
    Debug(v[i], f, s);
    if (!f && !s) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}