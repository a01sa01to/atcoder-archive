/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc093/submissions/25330182
 * Submitted at: 2021-08-25 19:12:57
 * Problem URL: https://atcoder.jp/contests/abc093/tasks/abc093_b
 * Result: WA
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

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  ll a, b, k;
  cin >> a >> b >> k;
  ll1d ans;
  rep(i, min(b - a, k) + 1) {
    ans.push_back(a + i);
    ans.push_back(b - i);
  }
  sort(all(ans));
  auto itr = unique(all(ans));
  ans.erase(itr, ans.end());
  for (ll x : ans) {
    cout << x << endl;
  }
  return 0;
}