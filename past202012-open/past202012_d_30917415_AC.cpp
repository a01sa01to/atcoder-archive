/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/30917415
 * Submitted at: 2022-04-12 00:02:21
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_d
 * Result: AC
 * Execution Time: 178 ms
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
  vector<pair<string, int>> v(n);
  rep(i, n) {
    string s;
    cin >> s;
    int cnt = 0;
    rep(i, s.size()) {
      if (s[i] == '0')
        ++cnt;
      else
        break;
    }
    v[i] = { s.substr(cnt), cnt };
  }

  auto comp = [](const pair<string, int>& a, const pair<string, int>& b) {
    if (a.first.size() != b.first.size())
      return a.first.size() < b.first.size();
    if (a.first != b.first)
      return a.first < b.first;
    return a.second > b.second;
  };

  sort(v.begin(), v.end(), comp);
  for (auto [s, c] : v) {
    rep(_, c) cout << "0";
    cout << s << endl;
  }
  return 0;
}