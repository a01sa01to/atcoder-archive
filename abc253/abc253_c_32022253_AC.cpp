/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32022253
 * Submitted at: 2022-05-28 21:26:26
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: AC
 * Execution Time: 291 ms
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
  int q;
  cin >> q;
  map<ll, ll> m;
  set<ll> st;
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      ll x;
      cin >> x;
      m[x]++;
      st.insert(x);
    }
    else if (t == 2) {
      ll x, c;
      cin >> x >> c;
      m[x] = max(0LL, m[x] - c);
      if (m[x] == 0) {
        st.erase(x);
      }
    }
    else {
      cout << *st.rbegin() - *st.begin() << endl;
    }
  }
  return 0;
}