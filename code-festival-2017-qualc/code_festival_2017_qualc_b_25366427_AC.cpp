/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-qualc/submissions/25366427
 * Submitted at: 2021-08-27 22:48:51
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  int even = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a % 2 == 0) even++;
  }
  // ans: 3^n - 奇数になるやつ
  // 奇数になる: a[i]が偶数→2通り、奇数→1通り
  //          -> 1 * 2^even
  cout << int(pow(3, n) - pow(2, even)) << endl;
  return 0;
}