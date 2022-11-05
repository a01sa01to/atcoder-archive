/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36259983
 * Submitted at: 2022-11-05 22:36:26
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_f
 * Result: AC
 * Execution Time: 758 ms
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
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  map<ll, queue<ll>> mp, mp2;
  {
    ll cnt = 0;
    vector<ll> b = a;
    sort(b.begin(), b.end());
    rep(i, n) mp[b[i]].push(cnt++);
  }
  fenwick_tree<mint> fw(n);
  fenwick_tree<ll> fw2(n);
  mint now = 0;
  rep(i, n) {
    ll idx = mp[a[i]].front();
    ll pushed = fw2.sum(0, idx);
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