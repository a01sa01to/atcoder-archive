/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc210/submissions/24412045
 * Submitted at: 2021-07-20 22:57:53
 * Problem URL: https://atcoder.jp/contests/abc210/tasks/abc210_c
 * Result: AC
 * Execution Time: 249 ms
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
  ll n, k;
  cin >> n >> k;
  ll1d c(n);
  map<ll, ll> mp;
  ll ans = 0;
  loop(i, n) { cin >> c[i]; }
  loop(i, n) {
    if (i >= k) {
      mp[c[i - k]]--;
      if (mp[c[i - k]] == 0) {
        mp.erase(c[i - k]);
      }
    }
    mp[c[i]]++;
    ans = max(ans, (ll) mp.size());
  }
  cout << ans << endl;
  return 0;
}