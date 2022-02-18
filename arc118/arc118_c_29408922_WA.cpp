/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc118/submissions/29408922
 * Submitted at: 2022-02-19 00:34:31
 * Problem URL: https://atcoder.jp/contests/arc118/tasks/arc118_c
 * Result: WA
 * Execution Time: 55 ms
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
  set<int> a = { 6, 10, 15 };
  for (int i = 2; i <= 1e5; ++i) {
    a.insert(6 * i);
    a.insert(10 * i);
    a.insert(15 * i);
  }
  auto itr = a.begin();
  while (n--) {
    cout << *itr << " ";
    ++itr;
  }
  cout << endl;
  return 0;
}