/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36258515
 * Submitted at: 2022-11-05 22:31:34
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_f
 * Result: WA
 * Execution Time: 748 ms
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

using mint = modint998244353;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, queue<int>> mp, mp2;
  {
    int cnt = 0;
    vector<int> b = a;
    sort(b.begin(), b.end());
    rep(i, n) mp[b[i]].push(cnt++);
  }
  fenwick_tree<mint> fw(n);
  fenwick_tree<int> fw2(n);
  mint now = 0;
  rep(i, n) {
    int idx = mp[a[i]].front();
    int pushed = fw2.sum(0, idx);
    mp[a[i]].pop();
    now += fw.sum(idx, n) * 2;
    now += a[i] * (1 + 2 * pushed);
    fw2.add(idx, 1);
    Debug(pushed, idx, now.val());
    fw.add(idx, a[i]);
    cout << (now / mint(i + 1).pow(2)).val() << endl;
  }
  return 0;
}