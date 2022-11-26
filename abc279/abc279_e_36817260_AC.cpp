/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36817260
 * Submitted at: 2022-11-26 21:53:48
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_e
 * Result: AC
 * Execution Time: 317 ms
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
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  rep(i, m) {
    cin >> a[i];
    a[i]--;
  }
  vector<int> b(n);
  iota(b.begin(), b.end(), 0);
  int now1 = 0;
  vector<int> s(m, 0);
  rep(i, m) {
    swap(b[a[i]], b[a[i] + 1]);
    s[i] = b[now1];
    if (b[a[i] + 1] == 0) now1++;
    if (b[a[i]] == 0) now1--;
    Debug(b, now1);
  }
  Debug(s);
  vector<int> t(n);
  rep(i, n) t[b[i]] = i;
  rep(i, m) cout << t[s[i]] + 1 << endl;
  return 0;
}