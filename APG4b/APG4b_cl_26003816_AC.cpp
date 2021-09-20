/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26003816
 * Submitted at: 2021-09-20 11:24:57
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cl
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, a;
  cin >> n >> a;
  rep(i, n) {
    char op;
    int b;
    cin >> op >> b;
    if (op == '/' && b == 0) {
      cout << "error" << endl;
      return 0;
    }
    switch (op) {
      case '+':
        a += b;
        break;
      case '-':
        a -= b;
        break;
      case '*':
        a *= b;
        break;
      case '/':
        a /= b;
        break;
    }
    cout << i + 1 << ":" << a << endl;
  }
  return 0;
}