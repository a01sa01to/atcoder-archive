/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31520482
 * Submitted at: 2022-05-08 21:11:02
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_c
 * Result: AC
 * Execution Time: 433 ms
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
  int n, q;
  cin >> n >> q;
  // mp: その数が書かれた場所
  // mpinv: その場所に書かれた数
  map<int, int> mp, mpinv;
  rep(i, n) mp[i] = mpinv[i] = i;
  while (q--) {
    int x;
    cin >> x;
    --x;
    int pos = mp[x];
    if (pos == n - 1) pos--;
    swap(mpinv[pos], mpinv[pos + 1]);
    mp[mpinv[pos + 1]] = pos + 1;
    mp[mpinv[pos]] = pos;
  }
  rep(i, n) cout << mpinv[i] + 1 << " ";
  cout << endl;
  return 0;
}