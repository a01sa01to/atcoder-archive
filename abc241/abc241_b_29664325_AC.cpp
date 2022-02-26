/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc241/submissions/29664325
 * Submitted at: 2022-02-26 21:03:41
 * Problem URL: https://atcoder.jp/contests/abc241/tasks/abc241_b
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> a;
  rep(i, n) {
    int x;
    cin >> x;
    a[x]++;
  }
  rep(i, m) {
    int b;
    cin >> b;
    if (a[b] == 0) {
      cout << "No" << endl;
      return 0;
    }
    a[b]--;
  }
  cout << "Yes" << endl;
  return 0;
}