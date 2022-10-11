/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc150/submissions/35584772
 * Submitted at: 2022-10-11 17:05:19
 * Problem URL: https://atcoder.jp/contests/arc150/tasks/arc150_a
 * Result: WA
 * Execution Time: 51 ms
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

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  // continuous check
  {
    bool f = false, g = false;
    rep(i, n) {
      if (!f && s[i] == '1') f = true;
      if (f && s[i] == '0') g = true;
      if (g && s[i] == '1') {
        cout << "No" << endl;
        return;
      }
    }
  }

  string ns = "";
  int first1 = -1;
  int last1 = -1;
  // create new s
  {
    bool f = false;
    rep(i, n) {
      if (!f && s[i] == '1') {
        f = true;
        first1 = i;
        while (i - 1 >= 0 && s[i - 1] == '?') --i;
        first1 = first1 - i;
      }
      if (f && s[i] == '0') break;
      if (f) ns.push_back(s[i]);
      if (s[i] == '1') last1 = ns.size() - 1;
    }
  }
  Debug(ns, first1, last1);

  // check
  if (ns.size() == k) {
    cout << "Yes" << endl;
  }
  if (ns.size() < k) {
    cout << "No" << endl;
  }
  else {
    // 1???1, k=3
    if (last1 - first1 + 1 > k) {
      cout << "No" << endl;
    }
    // ?1?1?, k=3
    else if (ns.front() == '?' && ns.back() == '?') {
      cout << "No" << endl;
    }
    else {
      cout << "Yes" << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}