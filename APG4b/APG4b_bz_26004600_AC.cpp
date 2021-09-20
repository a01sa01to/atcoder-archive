/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26004600
 * Submitted at: 2021-09-20 12:14:37
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_bz
 * Result: AC
 * Execution Time: 1042 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll1d v;
  multiset<ll> ms;
  rep(i, n) {
    ll a;
    cin >> a;
    if (!ms.count(a)) v.push_back(a);
    ms.insert(a);
  }
  P p = { -1, -1 };
  rep(i, v.size()) {
    if (p.second < ll(ms.count(v[i]))) {
      p = { v[i], ms.count(v[i]) };
    }
  }
  cout << p.first << " " << p.second << endl;
  return 0;
}