/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc094/submissions/34764773
 * Submitted at: 2022-09-11 00:12:19
 * Problem URL: https://atcoder.jp/contests/abc094/tasks/arc095_b
 * Result: AC
 * Execution Time: 44 ms
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
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i] *= 2;
  }
  sort(a.begin(), a.end());

  int tmp = a.back() / 2;
  a.pop_back();
  cout << tmp << " ";
  auto itr = upper_bound(a.begin(), a.end(), tmp);
  if (itr == a.begin()) {
    cout << *itr / 2 << endl;
  }
  else {
    int x = *itr;
    int y = *(itr - 1);
    if (abs(x - tmp) < abs(y - tmp)) {
      cout << x / 2 << endl;
    }
    else {
      cout << y / 2 << endl;
    }
  }
  return 0;
}