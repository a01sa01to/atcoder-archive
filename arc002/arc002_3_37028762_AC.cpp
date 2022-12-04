/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc002/submissions/37028762
 * Submitted at: 2022-12-05 00:18:25
 * Problem URL: https://atcoder.jp/contests/arc002/tasks/arc002_3
 * Result: AC
 * Execution Time: 9 ms
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

int solve(const string& s, const array<char, 2>& l, const array<char, 2>& r) {
  int n = s.size();
  int ans = 0;
  rep(i, n) {
    if (s[i] == l[0] && s[i + 1] == l[1]) {
      ans++;
      i++;
    }
    else if (s[i] == r[0] && s[i + 1] == r[1]) {
      ans++;
      i++;
    }
    else {
      ans++;
    }
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 1e9;
  vector<array<char, 2>> ls(0);
  {
    string tmp = "ABXY";
    rep(i, 4) rep(j, 4) ls.push_back({ tmp[i], tmp[j] });
  }
  rep(i, ls.size()) rep(j, ls.size()) {
    int t = solve(s, ls[i], ls[j]);
    Debug(ls[i], ls[j], t);
    ans = min(ans, t);
  }
  cout << ans << endl;
  return 0;
}