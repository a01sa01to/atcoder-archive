/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/28534569
 * Submitted at: 2022-01-15 21:06:57
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_c
 * Result: AC
 * Execution Time: 755 ms
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
  int n, q;
  cin >> n >> q;
  map<int, vector<int>> mp;
  rep(i, n) {
    int a;
    cin >> a;
    mp[a].push_back(i);
  }
  rep(i, q) {
    int x, k;
    cin >> x >> k;
    if (mp[x].size() < k) {
      cout << -1 << endl;
    }
    else {
      cout << mp[x][k - 1] + 1 << endl;
    }
  }
  return 0;
}