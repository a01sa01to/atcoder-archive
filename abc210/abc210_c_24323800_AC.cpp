/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc210/submissions/24323800
 * Submitted at: 2021-07-17 22:25:51
 * Problem URL: https://atcoder.jp/contests/abc210/tasks/abc210_c
 * Result: AC
 * Execution Time: 460 ms
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
  ll ans = 0;
  cin >> n >> k;
  ll1d c(n, 0);
  multiset<ll> cont;
  set<ll> con;
  loop(i, n) {
    cin >> c[i];
  }
  loop(i, n) {
    if (i >= k) {
      auto itr = cont.find(c[i - k]);
      cont.erase(itr);
      if (cont.count(c[i - k]) == 0) {
        con.erase(c[i - k]);
      }
    }
    cont.insert(c[i]);
    con.insert(c[i]);
    ans = max(ans, (ll) con.size());
  }
  cout << ans << endl;
  return 0;
}