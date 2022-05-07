/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc057/submissions/31489899
 * Submitted at: 2022-05-07 21:31:17
 * Problem URL: https://atcoder.jp/contests/agc057/tasks/agc057_a
 * Result: WA
 * Execution Time: 37 ms
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

void solve() {
  int l, r;
  cin >> l >> r;
  if (to_string(l).size() == to_string(r).size()) {
    cout << r - l + 1 << endl;
  }
  else {
    string t = to_string(r);
    if (t[0] == '1') {
      reverse(t.begin(), t.end());
      t.pop_back();
      reverse(t.begin(), t.end());
      if (t[0] == '0') t[0] = '1';
      int new_l = stoi(t) + 1;
      Debug(new_l);
      cout << r - max(l, new_l) + 1 << endl;
    }
    else {
      int new_l = 1;
      rep(_, t.size() - 1) new_l *= 10;
      cout << r - max(l, new_l) + 1 << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}