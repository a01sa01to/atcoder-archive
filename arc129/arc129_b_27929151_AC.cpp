/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc129/submissions/27929151
 * Submitted at: 2021-12-16 00:00:00
 * Problem URL: https://atcoder.jp/contests/arc129/tasks/arc129_b
 * Result: AC
 * Execution Time: 409 ms
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
  int n;
  cin >> n;
  int l = 0, r = 1e9;
  rep(i, n) {
    int _l, _r;
    cin >> _l >> _r;
    l = max(l, _l);
    r = min(r, _r);
    if (l < r) {
      cout << 0 << endl;
    }
    else {
      cout << (l - r - 1) / 2 + 1 << endl;
    }
  }
  return 0;
}