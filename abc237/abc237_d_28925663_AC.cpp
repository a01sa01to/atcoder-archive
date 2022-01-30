/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/28925663
 * Submitted at: 2022-01-30 21:29:51
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_d
 * Result: AC
 * Execution Time: 626 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  map<int, int> nxt, prv;
  int minim = 0, lst = 0;
  rep(i, n) {
    if (s[i] == 'L') {
      prv[i + 1] = prv[i];
      nxt[prv[i]] = i + 1;
      prv[i] = i + 1;
      nxt[i + 1] = i;
      if (minim == i) minim = i + 1;
    }
    else {
      nxt[i + 1] = nxt[i];
      prv[nxt[i]] = i + 1;
      nxt[i] = i + 1;
      prv[i + 1] = i;
      if (lst == i) lst = i + 1;
    }
    Debug(nxt);
  }
  Debug(nxt);
  Debug(minim);
  Debug(lst);
  while (true) {
    cout << minim << " ";
    if (minim == lst) break;
    minim = nxt[minim];
  }
  cout << endl;
  return 0;
}