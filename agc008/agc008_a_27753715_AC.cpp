/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc008/submissions/27753715
 * Submitted at: 2021-12-07 21:49:03
 * Problem URL: https://atcoder.jp/contests/agc008/tasks/agc008_a
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
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  int x, y;
  cin >> x >> y;
  int ans = 0;
  if (x == 0) {
    // |y|まで増やして、y負なら逆
    ans = abs(y) + (y < 0);
  }
  else if (y == 0) {
    // x正なら逆にして、0まで足す
    ans = abs(x) + (x > 0);
  }
  else if (abs(x) > abs(y)) {
    if (x > 0 && y > 0) {
      // x符号を逆にして、-yにして、逆にする
      ans = 1 + (abs(x) - abs(y)) + 1;
    }
    else if (x > 0 && y < 0) {
      // x逆にして、yにする
      ans = 1 + (abs(x) - abs(y));
    }
    else if (x < 0 && y > 0) {
      // 足していって、|y|になったら逆にする
      ans = (abs(x) - abs(y)) + 1;
    }
    else {  // x<0 && y<0
      // 愚直に足す
      ans = (abs(x) - abs(y));
    }
  }
  else {  // abs(y) > abs(x)
    if (x > 0 && y > 0) {
      // 愚直に足す
      ans = (abs(y) - abs(x));
    }
    else if (x > 0 && y < 0) {
      // |y|まで足して、逆にする
      ans = (abs(y) - abs(x)) + 1;
    }
    else if (x < 0 && y > 0) {
      // 逆にして、足す
      ans = 1 + (abs(y) - abs(x));
    }
    else {  // x<0 && y<0
      // 逆にして、-yにして、逆にする
      ans = 1 + (abs(y) - abs(x)) + 1;
    }
  }
  cout << ans << endl;
  return 0;
}