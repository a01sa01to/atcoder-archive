/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/intro-heuristics/submissions/30561278
 * Submitted at: 2022-03-30 11:04:50
 * Problem URL: https://atcoder.jp/contests/intro-heuristics/tasks/intro_heuristics_c
 * Result: AC
 * Execution Time: 825 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int day = 365;
constexpr int num_types = 26;
vector<int> c(num_types);
vector s(day, vector<int>(num_types, 0));

int score(vector<int>& t) {
  int ret = 0;
  vector<int> last(num_types, 0);
  rep(i, day) {
    ret += s[i][t[i]];
    last[t[i]] = i + 1;
    rep(j, num_types) ret -= c[j] * (i - last[j] + 1);
    // cout << ret << endl;
  }
  return ret;
}

int main() {
  int _;
  cin >> _;
  rep(i, num_types) cin >> c[i];
  rep(i, day) rep(j, num_types) cin >> s[i][j];
  vector<int> t(day);
  rep(i, day) {
    cin >> t[i];
    --t[i];
  }
  int m;
  cin >> m;
  while (m--) {
    int d, q;
    cin >> d >> q;
    --d, --q;
    t[d] = q;
    cout << score(t) << endl;
  }
  return 0;
}