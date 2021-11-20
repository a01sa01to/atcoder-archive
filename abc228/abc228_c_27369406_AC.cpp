/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27369406
 * Submitted at: 2021-11-20 21:25:18
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_c
 * Result: AC
 * Execution Time: 190 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  fenwick_tree<int> fw(10001);
  rep(i, n) {
    int a, b, c;
    cin >> a >> b >> c;
    v[i] = a + b + c;
    fw.add(a + b + c, 1);
  }
  rep(i, n) {
    if (fw.sum(v[i] + 301, 10000) < k) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  return 0;
}