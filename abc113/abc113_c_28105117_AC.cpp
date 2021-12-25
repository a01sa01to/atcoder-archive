/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/28105117
 * Submitted at: 2021-12-25 15:47:50
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_c
 * Result: AC
 * Execution Time: 288 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

string padstart(int s, int n) {
  string ret = "";
  rep(i, n - to_string(s).size()) ret += "0";
  ret += to_string(s);
  return ret;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<P>> p(n);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    p[--x].push_back(P(i, y));
  }
  rep(i, n) sort(p[i].begin(), p[i].end(), [](P& a, P& b) {
    return a.second < b.second;
  });
  vector<string> ans(m);
  rep(i, n) {
    rep(j, p[i].size()) {
      ans[p[i][j].first] = padstart(i + 1, 6) + padstart(j + 1, 6);
    }
  }
  rep(i, m) cout << ans[i] << endl;
  return 0;
}