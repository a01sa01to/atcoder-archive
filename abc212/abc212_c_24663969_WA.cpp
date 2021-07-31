/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc212/submissions/24663969
 * Submitted at: 2021-07-31 21:21:49
 * Problem URL: https://atcoder.jp/contests/abc212/tasks/abc212_c
 * Result: WA
 * Execution Time: 760 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll n, m;
  cin >> n >> m;
  ll1d a(n), b(m);
  loop(i, n) { cin >> a[i]; }
  loop(i, m) { cin >> b[i]; }
  sort(all(a));
  sort(all(b));
  ll minim = 1e9;
  ll i = 0, j = 0;
  while (i < n && j < m) {
    if (a[i] - b[j] >= 0) {
      minim = min(minim, a[i] - b[j]);
      j++;
    }
    else {
      i++;
    }
  }
  cout << minim << endl;
  return 0;
}