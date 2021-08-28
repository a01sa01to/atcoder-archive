/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021/submissions/25377735
 * Submitted at: 2021-08-28 16:04:28
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021/tasks/rcl_contest_2021_a
 * Result: AC
 * Execution Time: 72 ms
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
  int n, m, k;
  cin >> n >> m >> k;
  ll1d a(n);
  ll2d priority;
  rep(i, n) cin >> a[i];
  rep(i, n) rep(j, n) {
    priority.push_back({ i, j, (a[i] + a[j]) % k });
  }
  auto comp = [&](ll1d& ap, ll1d& bp) {
    ap[2] = (a[ap[0]] + a[ap[1]]) % k;
    bp[2] = (a[bp[0]] + a[bp[1]]) % k;
    return ap[2] > bp[2];
  };
  sort(all(priority), comp);
  rep(_, m) {
    ll i = priority.back()[0], j = priority.back()[1];
    a[i] = priority.back()[2];
    priority.pop_back();
    cout << i << " " << j << endl;
  }
  return 0;
}