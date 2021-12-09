/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/27776557
 * Submitted at: 2021-12-09 14:52:50
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_c
 * Result: AC
 * Execution Time: 5 ms
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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  // 0回 -> 同じ点
  bool chk0 = (a == c && b == d);

  // 1回 -> 条件
  bool chk1 = false;
  chk1 |= (a + b == c + d);
  chk1 |= (a - b == c - d);
  chk1 |= (abs(a - c) + abs(b - d) <= 3);

  // 2回
  bool chk2 = false;
  chk2 |= ((a + b) % 2 == (c + d) % 2);         // 斜め&斜め
  chk2 |= (abs(a - c) + abs(b - d) <= 6);       // 3+3
  chk2 |= (abs((a + c) - (b + d)) <= 3);        // 3+斜め/
  chk2 |= (abs(abs(a - c) - abs(b - d)) <= 3);  // 3+斜め\

  // 3回 -> else

  if (chk0) cout << 0 << endl;
  else if (chk1)
    cout << 1 << endl;
  else if (chk2)
    cout << 2 << endl;
  else
    cout << 3 << endl;
  return 0;
}