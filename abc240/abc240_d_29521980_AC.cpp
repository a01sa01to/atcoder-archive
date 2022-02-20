/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc240/submissions/29521980
 * Submitted at: 2022-02-20 21:19:15
 * Problem URL: https://atcoder.jp/contests/abc240/tasks/abc240_d
 * Result: AC
 * Execution Time: 351 ms
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
  cin >> n;
  vector<int> t(0);
  vector<pair<int, int>> prev(0);
  ll remSum = 0;
  rep(i, n) {
    int a;
    cin >> a;
    t.push_back(a);
    if (i > 0) {
      auto [x, y] = prev.back();

      if (a != x) {
        prev.push_back({ a, 1 });
      }
      else {
        prev.back().second++;
      }
      if (prev.back().second == a) {
        remSum += a;
        prev.pop_back();
      }
    }
    else {
      prev.push_back({ a, 1 });
    }
    cout << t.size() - remSum << endl;
  }
  return 0;
}