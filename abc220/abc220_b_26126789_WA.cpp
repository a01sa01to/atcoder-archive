/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc220/submissions/26126789
 * Submitted at: 2021-09-26 21:05:49
 * Problem URL: https://atcoder.jp/contests/abc220/tasks/abc220_b
 * Result: WA
 * Execution Time: 7 ms
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

struct convert_baseN {
  int baseN = 10;

  convert_baseN(int base = 10) {
    baseN = base;
  }

  vector<int> to(ull n) {
    vector<int> ans;
    while (n > 0) {
      ans.push_back(n % baseN);
      n /= baseN;
    }
    return ans;
  }

  ull from(vector<int> v) {
    ull ans = 0, powN = 1;
    rep(i, v.size()) {
      ans += powN * v[i];
      powN *= baseN;
    }
    return ans;
  }
};
int main() {
  cout << fixed << setprecision(15);
  int k, a, b;
  cin >> k >> a >> b;
  vector<int> a_baseK, b_baseK;
  for (int i = 1; i <= 100000; i *= 10) {
    a_baseK.push_back((a / i) % 10);
    b_baseK.push_back((b / i) % 10);
  }
  auto cb = convert_baseN(k);
  cout << cb.from(a_baseK) * cb.from(b_baseK) << endl;
  return 0;
}