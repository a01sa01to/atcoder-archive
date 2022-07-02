/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32893759
 * Submitted at: 2022-07-02 21:08:28
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_b
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

inline int mod(int x, int m) { return (x + m) % m; }

int main() {
  int n;
  cin >> n;
  vector a(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  set<string> st;
  rep(i, n) rep(j, n) {
    {
      string s = "";
      rep(k, n) {
        s += (a[i][mod(j + k, n)]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[i][mod(j - k, n)]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[mod(i + k, n)][j]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[mod(i - k, n)][j]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[mod(i + k, n)][mod(j + k, n)]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[mod(i + k, n)][mod(j - k, n)]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[mod(i - k, n)][mod(j + k, n)]);
      }
      st.insert(s);
    }
    {
      string s = "";
      rep(k, n) {
        s += (a[mod(i - k, n)][mod(j - k, n)]);
      }
      st.insert(s);
    }
  }
  cout << *st.rbegin() << endl;
  return 0;
}