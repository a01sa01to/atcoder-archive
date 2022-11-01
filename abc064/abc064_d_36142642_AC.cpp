/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc064/submissions/36142642
 * Submitted at: 2022-11-02 00:07:53
 * Problem URL: https://atcoder.jp/contests/abc064/tasks/abc064_d
 * Result: AC
 * Execution Time: 7 ms
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
  cin >> n;
  string s;
  cin >> s;
  deque<char> ans;
  int now = 0;
  rep(i, n) {
    now += 2 * (s[i] == '(') - 1;
    ans.push_back(s[i]);
    if (now < 0) {
      ans.push_front('(');
      now++;
    }
    Debug(now, ans);
  }
  while (now > 0) {
    ans.push_back(')');
    now--;
  }
  while (!ans.empty()) {
    cout << ans.front();
    ans.pop_front();
  }
  cout << endl;
  return 0;
}