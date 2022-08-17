/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc049/submissions/34107641
 * Submitted at: 2022-08-17 19:10:13
 * Problem URL: https://atcoder.jp/contests/agc049/tasks/agc049_b
 * Result: AC
 * Execution Time: 173 ms
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
  int n;
  string s, t;
  cin >> n >> s >> t;
  {
    int cnts = 0, cntt = 0;
    rep(i, n) {
      if (s[i] == '1') cnts++;
      if (t[i] == '1') cntt++;
    }
    if (cnts % 2 != cntt % 2) {
      cout << -1 << endl;
      return 0;
    }
    if (cntt > cnts) {
      cout << -1 << endl;
      return 0;
    }
  }
  Debug("checkpoint1");
  set<int> st;
  rep(i, n) {
    if (s[i] == '1') st.insert(i);
  }
  Debug("checkpoint2");
  ll ans = 0;
  rep(i, n) {
    if (t[i] == '1') {
      int idx = *st.lower_bound(i);
      ans += idx - i;
      st.erase(idx);
    }
  }
  Debug("checkpoint3");
  Debug(ans);
  Debug(st);
  if (st.size() % 2 == 1) {
    cout << -1 << endl;
    return 0;
  }
  while (!st.empty()) {
    auto itr = st.begin();
    auto itr2 = st.begin();
    itr2++;
    ans += *itr2 - *itr;
    st.erase(itr);
    st.erase(itr2);
    Debug(st);
  }
  cout << ans << endl;
  return 0;
}