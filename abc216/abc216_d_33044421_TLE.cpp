/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc216/submissions/33044421
 * Submitted at: 2022-07-08 00:40:20
 * Problem URL: https://atcoder.jp/contests/abc216/tasks/abc216_d
 * Result: TLE
 * Execution Time: 2206 ms
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
  vector a(m, vector<int>(0));
  rep(i, m) {
    int k;
    cin >> k;
    rep(_, k) {
      int ai;
      cin >> ai;
      a[i].push_back(ai);
    }
  }
  map<int, int> mp;
  rep(i, n) mp[i + 1] = -1;
  vector<int> idx(m, 0);
  while (true) {
    bool updated = false;
    rep(i, m) {
      if (idx[i] >= a[i].size()) continue;
      int c = a[i][idx[i]];
      int mpc = mp[c];
      if (mpc == i) continue;
      if (mpc == -1) {
        mp[c] = i;
      }
      else {
        updated = true;
        idx[i]++;
        idx[mpc]++;
        mp[c] = -1;
      }
    }
    Debug(idx, mp);
    if (!updated) break;
  }
  bool chk = true;
  rep(i, n) chk &= mp[i + 1] == -1;
  cout << (chk ? "Yes" : "No") << endl;
  return 0;
}