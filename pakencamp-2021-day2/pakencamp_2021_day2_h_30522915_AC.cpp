/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day2/submissions/30522915
 * Submitted at: 2022-03-28 11:58:36
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day2/tasks/pakencamp_2021_day2_h
 * Result: AC
 * Execution Time: 203 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

map<ll, ll> cond;

bool chk(ll n) {
  for (auto& [p, s] : cond) {
    ll cnt = 0, pp = p;
    while (true) {
      cnt += n / pp;
      if (pp <= n / p)
        pp *= p;
      else
        break;
    }
    if (cnt < s) return false;
  }
  return true;
}
bool chk2(ll n) {
  for (auto& [p, s] : cond) {
    ll cnt = 0, pp = p;
    while (true) {
      cnt += n / pp;
      if (pp <= n / p)
        pp *= p;
      else
        break;
    }
    if (cnt != s) return false;
  }
  return true;
}

int main() {
  int m;
  cin >> m;
  rep(i, m) {
    ll p, s;
    cin >> p >> s;
    cond[p] = s;
  }
  ll ok = 1e18, ng = 1;
  if (!chk(ok)) {
    cout << -1 << endl;
    return 0;
  }
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    if (chk(mid))
      ok = mid;
    else
      ng = mid;
  }

  if (chk2(ok))
    cout << ok << endl;
  else
    cout << -1 << endl;

  return 0;
}