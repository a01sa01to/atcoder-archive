/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35129020
 * Submitted at: 2022-09-24 22:16:40
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_e
 * Result: RE
 * Execution Time: 115 ms
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

int main() {
  ll n, k;
  cin >> n >> k;
  priority_queue<ll, vector<ll>, greater<ll>> q;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    q.push(a[i]);
  }
  ll used = 0, m = 0;
  while (used < k) {
    ll x = q.top();
    if (k - used < x * q.size()) {
      break;
    }
    used += (x - m) * q.size();
    m = x;
    q.pop();
  }
  ll rem = k - used;
  ll x = rem / q.size();
  rep(i, n) {
    if (a[i] <= m) {
      a[i] = 0;
    }
    else {
      a[i] -= m + x;
      rem -= x;
    }
  }
  rep(i, n) {
    if (rem == 0) {
      break;
    }
    if (a[i] > 0) {
      a[i]--;
      rem--;
    }
  }
  rep(i, n) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}