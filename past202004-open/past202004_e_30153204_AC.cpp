/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30153204
 * Submitted at: 2022-03-16 00:00:02
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_e
 * Result: AC
 * Execution Time: 6 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  for (int i = 1; i <= n; ++i) {
    int now = i;
    int cnt = 0;
    while (cnt == 0 || now != i) {
      now = a[now - 1];
      ++cnt;
    }
    cout << cnt << " ";
  }
  cout << endl;
  return 0;
}