/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/30037136
 * Submitted at: 2022-03-12 21:11:29
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_c
 * Result: AC
 * Execution Time: 321 ms
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
  vector<pair<int, int>> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;
  string s;
  cin >> s;
  map<int, vector<pair<int, bool>>> m;
  rep(i, n) {
    m[a[i].second].push_back({ a[i].first, s[i] == 'R' });
  }
  for (auto& [y, v] : m) {
    sort(v.begin(), v.end());
    bool flag = false;
    rep(i, v.size()) {
      if (!flag && v[i].second) {
        flag = true;
      }
      else if (flag && !v[i].second) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}