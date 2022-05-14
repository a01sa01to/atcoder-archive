/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/31668351
 * Submitted at: 2022-05-14 21:18:39
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_c
 * Result: AC
 * Execution Time: 147 ms
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
  int n;
  cin >> n;
  map<string, pair<int, int>> m;
  rep(i, n) {
    string s;
    cin >> s;
    int x;
    cin >> x;
    if (!m.count(s)) m[s] = { x, i + 1 };
  }
  pair<int, int> maxim = { 0, 0 };
  for (auto [k, v] : m) {
    if (v.first > maxim.first) maxim = v;
    else if (v.first == maxim.first && v.second < maxim.second)
      maxim = v;
  }
  cout << maxim.second << endl;
  return 0;
}