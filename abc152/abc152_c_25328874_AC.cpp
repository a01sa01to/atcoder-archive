/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc152/submissions/25328874
 * Submitted at: 2021-08-25 17:46:13
 * Problem URL: https://atcoder.jp/contests/abc152/tasks/abc152_c
 * Result: AC
 * Execution Time: 52 ms
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
  int ans = 0, lowest = 2e5;
  rep(i, n) {
    int a;
    cin >> a;
    if (lowest >= a) {
      ans++;
      lowest = a;
    }
  }
  cout << ans << endl;
  return 0;
}