/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/digitalarts2012/submissions/34853104
 * Submitted at: 2022-09-14 18:58:50
 * Problem URL: https://atcoder.jp/contests/digitalarts2012/tasks/digitalarts_2
 * Result: AC
 * Execution Time: 9 ms
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

inline int calcHash(const string& s) {
  int res = 0;
  for (char c : s) res += c - 'a' + 1;
  return res;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();
  rep(i, n) rep(j, n) {
    if (s[i] != s[j]) {
      swap(s[i], s[j]);
      cout << s << endl;
      return 0;
    }
  }
  int x = -1, y = -1;
  rep(i, n) {
    if (s[i] != 'a') {
      s[i]--;
      if (s.size() < 20) {
        s += 'a';
        cout << s << endl;
        return 0;
      }
      x = i;
      break;
    }
  }
  if (x == -1) {
    if (s.size() == 1) {
      cout << "NO" << endl;
      return 0;
    }
    else {
      s.pop_back();
      s.pop_back();
      s += "b";
      cout << s << endl;
      return 0;
    }
  }
  rep(i, n) {
    if (s[i] != 'z' && x != i) {
      s[i]++;
      y = i;
      break;
    }
  }
  if (y == -1) {
    if (s.size() == 20) {
      cout << "NO" << endl;
      return 0;
    }
    else {
      s += 'a';
    }
  }
  cout << s << endl;
  return 0;
}