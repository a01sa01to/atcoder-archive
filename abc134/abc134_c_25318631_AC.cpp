/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/25318631
 * Submitted at: 2021-08-24 23:43:18
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_c
 * Result: AC
 * Execution Time: 344 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  int maxim = 0, maxim2 = 0, maxI = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (maxim <= a) {
      maxim2 = maxim;
      maxim = a;
      maxI = i;
    }
    else if (maxim2 < a) {
      maxim2 = a;
    }
  }
  rep(i, n) {
    cout << (i == maxI ? maxim2 : maxim) << endl;
  }
  return 0;
}