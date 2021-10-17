/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc223/submissions/26637869
 * Submitted at: 2021-10-17 21:30:42
 * Problem URL: https://atcoder.jp/contests/abc223/tasks/abc223_c
 * Result: AC
 * Execution Time: 50 ms
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
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<P> v(n);
  ll1d sum(n + 1, 0);
  vector<ld> t(n + 1, 0);
  rep(i, n) {
    cin >> v[i].first >> v[i].second;
    sum[i + 1] = sum[i] + v[i].first;
    t[i + 1] = (ld(v[i].first) / ld(v[i].second)) + t[i];
  }
  int ok = n, ng = -1;
  while (ok - ng > 1) {
    int mid = (ok + ng) / 2;
    if (t[mid] >= t[n] / 2) ok = mid;
    else
      ng = mid;
  }
  if (t[ok] == t[n] / 2) { cout << ld(sum[ok]) << endl; }
  else {
    cout << ld(sum[ok - 1]) + (t[n] / 2 - t[ok - 1]) * v[ok - 1].second << endl;
  }
  return 0;
}