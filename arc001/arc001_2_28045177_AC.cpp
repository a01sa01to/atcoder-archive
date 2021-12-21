/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc001/submissions/28045177
 * Submitted at: 2021-12-21 15:20:24
 * Problem URL: https://atcoder.jp/contests/arc001/tasks/arc001_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  while (a != b) {
    if (a < b) {
      if (a + 8 <= b) a += 10;
      else if (a + 3 <= b) a += 5;
      else a += 1;
    }
    else {
      if (b + 8 <= a) b += 10;
      else if (b + 3 <= a) b += 5;
      else b += 1;
    }
    ++ans;
  }
  cout << ans << endl;
  return 0;
}