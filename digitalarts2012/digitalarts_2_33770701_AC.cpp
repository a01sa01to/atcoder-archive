/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/digitalarts2012/submissions/33770701
 * Submitted at: 2022-08-05 00:01:36
 * Problem URL: https://atcoder.jp/contests/digitalarts2012/tasks/digitalarts_2
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

int main() {
  string s;
  cin >> s;
  int n = s.size();
  if (s == "a" || s == "zzzzzzzzzzzzzzzzzzzz") {
    cout << "NO" << endl;
    return 0;
  }
  rep(i, n) rep(j, n) {
    if (i >= j) continue;
    if (s[i] != s[j]) {
      swap(s[i], s[j]);
      cout << s << endl;
      return 0;
    }
  }
  if (s[0] == 'a') {
    s.pop_back(), s.pop_back();
    s.push_back('b');
  }
  else if (s[0] == 'z' || n == 1) {
    s.back()--;
    s.push_back('a');
  }
  else {
    s[0]++;
    s.back()--;
  }
  cout << s << endl;
}