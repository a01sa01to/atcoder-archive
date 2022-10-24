/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/35946620
 * Submitted at: 2022-10-25 00:00:02
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_d
 * Result: AC
 * Execution Time: 8 ms
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

bool check(const string& x, const ll& mid, const ll& m) {
  ll sum = 0;
  for (auto c : x) {
    Debug(c, sum);
    if (sum > LLONG_MAX / mid) return false;
    sum *= mid;
    sum += c - '0';
  }
  Debug(mid, sum, m);
  return sum <= m;
}

int main() {
  string x;
  cin >> x;
  ll m;
  cin >> m;
  if (x.size() == 1) {
    cout << (x[0] - '0' <= m) + 0 << endl;
  }
  else {
    ll d = *max_element(x.begin(), x.end()) - '0';
    Debug(d);
    ll ok = d, ng = m + 1;
    while (ng - ok > 1) {
      ll mid = (ok + ng) / 2;
      Debug(ok, ng, mid);
      (check(x, mid, m) ? ok : ng) = mid;
    }
    cout << ok - d << endl;
  }
  return 0;
}