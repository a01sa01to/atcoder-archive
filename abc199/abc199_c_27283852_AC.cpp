/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/27283852
 * Submitted at: 2021-11-16 10:48:46
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: AC
 * Execution Time: 169 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string a = s.substr(0, n), b = s.substr(n);
  int q;
  cin >> q;
  rep(i, q) {
    int t;
    cin >> t;
    int x, y;
    cin >> x >> y;
    if (t == 1) {
      x--, y--;
      if (x >= n && y >= n) swap(b[x - n], b[y - n]);
      else if (x >= n)
        swap(b[x - n], a[y]);
      else if (y >= n)
        swap(a[x], b[y - n]);
      else
        swap(a[x], a[y]);
    }
    else {
      swap(a, b);
    }
  }
  cout << a << b << endl;
  return 0;
}