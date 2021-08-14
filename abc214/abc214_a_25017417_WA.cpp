/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/25017417
 * Submitted at: 2021-08-14 21:01:27
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_a
 * Result: WA
 * Execution Time: 8 ms
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
  if(n<=125){ cout << 4 << endl; }
  else if(n<=211){ cout << 4 << endl; }
  else{ cout << 8 << endl; }
  return 0;
}